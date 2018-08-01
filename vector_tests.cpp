#include<iostream>
#include<cmath>

#include"vectorclass/vectorclass.h"
#include"vectorclass/vectormath_trig.h"

#include"Eigen/Core"

namespace Eigen {

  template<> struct NumTraits<Vec8f>: NumTraits<float>
  {
    typedef Vec8f Real;
    typedef Vec8f NonInteger;
    typedef Vec8f Nested;
    typedef float Literal;
    enum {
      IsComplex = 0,
      IsInteger = 0,
      IsSigned = 1,
      RequireInitialization = 1,
      ReadCost = 1,
      AddCost = 3,
      MulCost = 3
    };
  };
}


typedef Eigen::Matrix< Vec8f , 3 , 1> Vector3Vec8f;
typedef Eigen::Matrix< Vec8f , 3 , 3> Matrix3Vec8f;

std::ostream& operator<<(std::ostream& s, const Vec8f& v)
{
  s << v[0] << '_' << v[1] << '_' << v[2] << '_' << v[3] << '_'
    << v[4] << '_' << v[5] << '_' << v[6] << '_' << v[7];
  return s;
}

int main(int argc, char** argv)
{
  Vec8f x(0.0f,1.0f,2.0f,3.0f,4.0f,5.0f,6.0f,7.0f);
  Vec8f y(10.0f,11.0f,12.0f,13.0f,14.0f,15.0f,16.0f,17.0f);
  Vec8f z(20.0f,21.0f,22.0f,23.0f,24.0f,25.0f,26.0f,27.0f);
  Vector3Vec8f vv8f(x,y,z);
  std::cout << vv8f.dot(vv8f) << '\n';
  Matrix3Vec8f mv8f = Matrix3Vec8f::Identity();
  mv8f(0,1) = mv8f(1,0) = mv8f(0,0);
  vv8f = mv8f * vv8f;
  std::cout << vv8f << '\n';
  std::cout << mv8f << '\n';
}
