#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2,-1);
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i + 1; j < nums.size(); ++j)    //start from i+1
            {
                if(nums[i] + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;
                }
            }
        }
        return result;
    }
};

int main(void)
{
    int nums[4] = {2, 7, 11, 15};
    vector<int> a(nums, nums+4);
    Solution s;
    vector<int> result = s.twoSum(a, 9);
    for(int i = 0; i < result.size(); ++i)
    {
        cout<<result[i]<<endl;
    }

    return 0;
}