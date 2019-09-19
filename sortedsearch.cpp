#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
  auto lower=std::lower_bound(sortedVector.begin(),sortedVector.end(),lessThan) ;
  return std::distance(sortedVector.begin(),lower);
}

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 5, 7 };
    std::cout << countNumbers(v, 4);
}
#endif
