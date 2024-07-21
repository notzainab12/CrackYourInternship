    int maxArea(vector<int>& height) {
        int left = 0, ans=0;
        int right = height.size() - 1;
        while (right > left){
            int lefth = height[left];
            int righth = height[right];
            int h = min(lefth, righth);
            int b = right-left;
            ans = max(ans, h*b);
            if (righth > lefth){
                left++;
            }
            else{
                right--;
            }            
        }
        return ans;
    }
