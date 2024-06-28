int function(vector<int>& nums){
    unordered_set<int> s(nums.begin(),nums.end());
    int ans = 0;
    for(int i= 0;i<nums.size();i++){
        int curr  = nums[i];
        int prev = curr - 1;
        int c = 0;
        if(s.find(prev) == s.end()){
            while(s.find(curr)! = s.end()){
                curr++;
                c++;
            }
        }
        ans  = max(ans,c);
    } 
    return ans;
}