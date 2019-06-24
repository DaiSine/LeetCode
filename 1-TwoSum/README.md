## 1. Two Sum  两数之和
给定一个整数数组`nums` 和一个目标值`target`，请你在该数组中找出和为目标值的那**两个**整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

**示例:**

```
给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
```



### C++

- C++中获取数组nums的长度可以通过调用size()函数来实现。

- C++ STL中的map结构：红黑树/自平衡二叉查找树/散列表
  
  ```C++
  //声明
  map<int,int> a;
  //插入元素
  a.insert(map<int, int>::value_type(nums[i], i));
  a.insert(make_pair<int, int>(nums[i], i));
  //报错 no instance of function template "std::make_pair" matches the argument list -- argument types are: (int, int)
  a.insert(pair<int, int>(nums[i], i));
  a[nums[i]] = i;
  ```
  
  

### C
- C 中的数组长度通过数组指针来获得并不是一件容易实现的事情，由此缘故形参中给出了numsSize。  
- 由于最后需要返回一个数组指针，因此在`ans[2]`的声明前加了static修饰。
- 这是一个遍历数组得出结果的方法，复杂度为O(n<sup>2</sup>)。(不建议使用这种方法)