#include <iostream>
#include <bits/stdc++.h>

int stepcounter(std::vector<int> &vec, int n)
{
  int tmp = n;
  int count = 0;
  while(tmp != 0)
    {
      vec.push_back(tmp);
      if(tmp%2 == 0)
      {
        tmp = tmp/2;
        count++;
      }
      else
      {
        tmp--;
        count++;
      }
    }
  return count;
}

int main() {
  std::vector<int> vec;
  int n = 49;
  int steps = stepcounter(vec, n);
//   for(auto x: vec)
//     {
//       std::cout<<x<<std::endl;
//     }
  std::cout<<"Nu: "<< steps<<std::endl;
  std::ofstream file_ptr = 
  return 0;
}