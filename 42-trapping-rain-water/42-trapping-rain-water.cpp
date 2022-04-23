class Solution {
public:
    int trap(vector<int>& height) {
        int right=height.size()-1,left= 0,left_max=0,right_max=0,result=0;
        while(left<=right){
            if(right_max<=left_max){
                result +=max(0,right_max-height[right]);
                right_max = max(right_max,height[right]);
                right-=1;
            }
            else{
                result += max(0,left_max-height[left]);
                left_max = max(left_max,height[left]);
                left+=1;
            }
        }
        return result;
    }
};