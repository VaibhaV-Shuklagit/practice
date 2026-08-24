void ZeroOneGame(ll n, vector<ll> &nums)
{   
    int validpairs = 0;
    int zero = 0;
    int one = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(nums[i] != nums[i + 1]){
            validpairs++;
            i++;
        }
    }
    for(int i = 0; i < n; i++){
        if(nums[i]) one++;
        else zero++;
    }
    if(zero == one){
        if(validpairs % 2 == 0){
            cout << "DA\n";
            return;
        }
        else{
            cout << "NET\n";
            return;
        }
    }
    else{
        if(validpairs % 2 == 0){
            cout << "NET\n";
            return;
        }
        else{
            cout << "DA\n";
            return;
        }
    }
}