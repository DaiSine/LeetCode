int* twoSum(int* nums, int numsSize, int target) {
    static int ans[2]={0,0};
    for(int i = 0; i < numsSize; ++i )
        for(int j = i + 1; j < numsSize; ++j )
            if(nums[j] + nums[i] == target)
            {
                ans[0] = i;
                ans[1] = j;
            }
    return ans;
    
}