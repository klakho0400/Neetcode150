class Solution {
public:
    bool check(vector<int>& piles, int h, int mid)
    {
        for(auto &i:piles)
        {
            h-=(i/mid);
            if(i%mid!=0)
            h-=1;
        }
        if(h>=0)
        return true;
        else
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 1e9;
        int ans = 1e9;

        while(l<r)
        {
            int mid = l+(r-l)/2;
            if(check(piles,h,mid))
            {
                ans = min(ans,mid);
                r = mid;
            }
            else
            l = mid+1;
        }
        return ans;
    }
};