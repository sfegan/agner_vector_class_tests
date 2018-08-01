#include<iostream>
#include<cmath>

#include"vectorclass/vectorclass.h"
#include"vectorclass/vectormath_trig.h"

int main(int argc, char** argv)
{
  Vec8f v8f(0.0f,1.0f,2.0f,3.0f,4.0f,5.0f,6.0f,7.0f);
  std::cout
    << v8f[0] << ' ' << v8f[1] << ' ' << v8f[2] << ' ' << v8f[3] << ' '
    << v8f[4] << ' ' << v8f[5] << ' ' << v8f[6] << ' ' << v8f[7] << '\n';
  v8f *= 4.0;
  std::cout
    << v8f[0] << ' ' << v8f[1] << ' ' << v8f[2] << ' ' << v8f[3] << ' '
    << v8f[4] << ' ' << v8f[5] << ' ' << v8f[6] << ' ' << v8f[7] << '\n';
  v8f *= v8f;
  std::cout
    << v8f[0] << ' ' << v8f[1] << ' ' << v8f[2] << ' ' << v8f[3] << ' '
    << v8f[4] << ' ' << v8f[5] << ' ' << v8f[6] << ' ' << v8f[7] << '\n';
  v8f *= 2.0 * M_PI / v8f[7];
  std::cout
    << v8f[0] << ' ' << v8f[1] << ' ' << v8f[2] << ' ' << v8f[3] << ' '
    << v8f[4] << ' ' << v8f[5] << ' ' << v8f[6] << ' ' << v8f[7] << '\n';
  v8f = sin(v8f);
  std::cout
    << v8f[0] << ' ' << v8f[1] << ' ' << v8f[2] << ' ' << v8f[3] << ' '
    << v8f[4] << ' ' << v8f[5] << ' ' << v8f[6] << ' ' << v8f[7] << '\n';
}
