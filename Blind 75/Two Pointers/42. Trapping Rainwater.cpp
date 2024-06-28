int trap(vector<int>& height){
    int i = 0;
    int j = height.size()-1;
    int maxleft = height[i];
    int maxright = height[j];
    int result=0;
    while(i<j){
        if(maxleft<maxright){
            i++;
            maxleft = max(maxleft,height[i]);
            result += maxleft - height[i]; 
        }
        else{
            j--;
            maxright = max(maxright,height[j]);
            result += maxright - height[i];
        }
    }
    return result;
}