class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        int n = num.size();
        sort(num.begin(),num.end());
        int target = 0;
        vector<vector<int>> ans;
        
        for(int i =0; i<n-2; i++)
        {
            target = -num[i];
            int front = i+1;
            int back = n-1;
          
            while(front<back)
            {
                 int sum = num[front] + num[back];
            
            
            if (sum < target)
                front++;

            else if (sum > target)
                back--;
        
             else {
                vector<int> triplet = {num[i], num[front], num[back]};
                ans.push_back(triplet);
                while (front < back && num[front] == triplet[1]) front++;
                while (front < back && num[back] == triplet[2]) back--;
            }
            }
         while (i + 1 < num.size() && num[i + 1] == num[i]) 
            i++;
        
    }
        
        return ans;
        }

        
};