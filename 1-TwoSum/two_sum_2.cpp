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
            //a.insert(map<int, int>::value_type(nums[i], i));
            //a.insert(make_pair<int, int>(nums[i], i));
            //no instance of function template "std::make_pair" matches the argument list -- argument types are: (int, int)
            //a.insert(pair<int, int>(nums[i], i));
            a[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); ++i)
        {
            if(a.count(target - nums[i]) != 0 && a[target - nums[i]] !=i)
            {
                b[0] = i;
                b[1] =  a[target - nums[i]];
                break;
            }
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