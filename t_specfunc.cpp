#include <iostream>
#include <vector>
#include "fmath.hpp"

int main()
{
  const int n = 7;
  std::vector<double> x(n);
  for (int i =0; i < x.size(); ++i)
    x[i] = 1.5*i;
  std::vector<double> v(x);
  fmath::expd_v(v.data(), n);
  for (int i =0; i < n; ++i)
    std::cout << "x="<<x[i]<<" v="<<v[i]<<std::endl;
  return 0;
}


