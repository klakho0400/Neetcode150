class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmax = height[0];
        int rmax = height[n-1];
        int ans = 0;
        int i = 0;
        int j = n-1;
        while(i<j)
        {

            lmax = max(height[i],lmax);
            rmax = max(height[j],rmax);
            if(height[i]<=height[j])
            {
                i++;
                if(height[i]<lmax)
                ans+=(lmax-height[i]);
            }
            else
            {
                j--;
                if(height[j]<rmax)
                ans+=(rmax-height[j]);
            }
        }
        return ans;
    }
};