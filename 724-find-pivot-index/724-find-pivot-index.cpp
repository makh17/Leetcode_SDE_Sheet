class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0,prev_sum = 0;
        for(auto i:nums){
            sum+=i;
        }
        cout << "sum is "<<sum<<"------------------\n";
        for(int i=0;i<nums.size();i++){
            if(prev_sum == sum-prev_sum-nums[i]){
                return i;
            }
            prev_sum+=nums[i];
            cout << prev_sum<<" "<<sum-prev_sum-nums[i]<<endl;
        }
        return -1;
        
    }
};