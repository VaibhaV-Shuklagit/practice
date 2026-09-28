#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombinations(int idx, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        for (int i = idx; i < candidates.size(); i++) {
            // Skip duplicates at the same recursion level
            if (i > idx && candidates[i] == candidates[i - 1]) continue;
            
            // If the current candidate exceeds the remaining target, break (since array is sorted)
            if (candidates[i] > target) break;
            
            current.push_back(candidates[i]);
            findCombinations(i + 1, target - candidates[i], candidates, current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> current;
        findCombinations(0, target, candidates, current, result);
        return result;
    }
};

int main() {
    
    Solution solver;
    
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> solutions = solver.combinationSum2(candidates, target);
    
    for (const auto& combination : solutions) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    
    return 0;
}
