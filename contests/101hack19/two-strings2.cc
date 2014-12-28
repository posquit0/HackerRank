#include <iostream>
#include <string>

bool check_intersection(std::string &s1, std::string &s2)
{
  for (char ch = 'a'; ch <= 'z'; ch++) {
    if (s1.find(ch) != std::string::npos && s2.find(ch) != std::string::npos) 
      return true;
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
   
    result = check_intersection(s1, s2);

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