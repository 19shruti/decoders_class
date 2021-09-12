
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //initializing map to check whether temp is present their or not . if yes count++
        unordered_map<int,int>m;
        int sum=0;
        int count=0;
        m[0]++;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int temp=sum-k;
            if(m[temp]!=0)
                count=count+m[temp];
                m[sum]++;
            
        }
      return count;
        
    }
};
