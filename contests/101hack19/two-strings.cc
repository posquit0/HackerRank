#include <iostream>
#include <algorithm>
#include <vector>

template <class InputIterator1, class InputIterator2>
  bool has_intersection (
    InputIterator1 first1, InputIterator1 last1,
    InputIterator2 first2, InputIterator2 last2)
{
  while (first1 != last1 && first2 != last2)
  {
    if (*first1 < *first2) ++first1;
    else if (*first1 > *first2) ++first2;
    else return true;
  }
  return false;
}

int main(int argc, char *argv[])
{
  int n;
  bool result;
  
  std::cin >> n;

  for (int i = 0; i < n; ++i)
  {
    std::string s1;
    std::string s2;
    
    std::cin >> s1;
    std::cin >> s2;
    
    std::sort (s1.begin(), s1.end());
    std::sort (s2.begin(), s2.end());

    result = has_intersection(
        s1.begin(), s1.end(), 
        s2.begin(), s2.end()
    );
    if (result)
    {
      std::cout << "YES" << std::endl;
    }
    else
    {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}