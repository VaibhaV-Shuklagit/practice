#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
   void backtrack(vector<vector<int>>& result, vector<int>& path, vector<int>& candidates, int target, int i) {
    // Base Case 1: Target reached
    if (target == 0) {
        result.push_back(path);
        return;
    }
    // Base Case 2: Out of bounds or target exceeded
    if (i >= candidates.size() || target < 0) {
        return;
    }
    
    // Choice 1: INCLUDE the current element candidates[i]
    // We stay at index 'i' because we can reuse the same element
    path.push_back(candidates[i]);
    backtrack(result, path, candidates, target - candidates[i], i);
    path.pop_back(); // Undo choice (backtrack)
    
    // Choice 2: EXCLUDE the current element candidates[i]
    // Move to the next index 'i + 1'
    backtrack(result, path, candidates, target, i + 1);
}

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(result, path, candidates, target, 0);
        return result;
    }
};

void printResult(const vector<vector<int>> &result)
{
    cout << "[";
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
            if (j < result[i].size() - 1)
                cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;
}

int main()
{
    Solution solver;

    vector<int> candidates1 = {2, 3, 6, 7};
    int target1 = 7;
    vector<vector<int>> res1 = solver.combinationSum(candidates1, target1);
    printResult(res1);
    return 0;
}
