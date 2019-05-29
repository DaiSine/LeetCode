#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a;
        vector<int> b(2,-1);
        for(int i = 0; i < nums.size(); ++i)
        {
            if(a.count(target - nums[i])!= 0)   //不用考虑重复利用这个数组中同样的元素，因为nums[i]还没有插入map a中
            {
                b[1] = i;   // 因为是边查询边插入元素的方法，所以查询到的a[target - nums[i]]的键更小
                b[0] = a[target - nums[i]];
                break;
            }
            a.insert(map<int, int>::value_type(nums[i], i));
        }

        return b;
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