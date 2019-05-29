## Two Sum 
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