// Maths Logic

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cntzero = 0;
        int n  = nums.size();
        vector<int> ans(n,0);
        int pro = 1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i]==0)
            cntzero++;
            else
            pro = pro*nums[i];
        }
        if(cntzero == 1)
        {
            for(int i = 0; i < n; i++)
            {
                if(nums[i]==0)
                ans[i] = pro;
            }
        }
        else if(cntzero == 0)
        {
            for(int i = 0; i < n; i++)
            {
                ans[i] = pro/nums[i];
            }
        }

        return ans;
    }
};

//Suffix and Prefix Array

// 1 , 2 , 3 , 4
// 1, 1, 2, 6
// 24, 12 ,4 ,1
//24, 12, 8, 6

//-1, 1, 0 , 3, -3
// 1, -1, -1, 0, 0
// 0, 0, -9 ,-3, 1
// 0, 0 , 9, 0 , 0 



    