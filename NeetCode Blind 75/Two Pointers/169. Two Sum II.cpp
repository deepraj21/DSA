vector<int> sum(vector<int>& num,int target){
    int i=0;
    int j= num.size() -1;
    while(i<j){
        vector<int> result;
        int sum = num[i]+num[j];
        if(sum < target){
            i++;
        }
        else if(sum > target){
            j--;
        }
        else{
            result.push_back(i+1);
            result.push_back(j+1);
        }
        return result;
    }
}