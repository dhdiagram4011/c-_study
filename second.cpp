// 소수점 몇째자리까지 출력하게 어떻게 하는지 알아보기
// 예) 100/3.14f 같은 식의 결과가 소수점 둘째자리까지 출력해야 한다면 31.84 혹은 31.85 이런식으로 나오게 하는 방법을 알아보시오

#include <iostream>
//#include <stdio.h> --> C
using namespace std;

int main() {
  int a = 10000000;
  float PI = 3.14f; //float 형의 경우 f 를 붙혀주고  double 형의경우  d 를 붙혀줌
  float result = a/PI; // 결과값을 담을 변수 지정 --> 31.8471

  //std::cout.precision(2); << float(result);
  cout << fixed;
  cout.precision(2); //정부수 까지 컨트롤
  cout << result;
  return 0;
}


///////
// //C++ round example.
// //BlockDMask
// #include<iostream>    //cout
// #include<cmath>        //round, ceil, floor
// using namespace std;
 
// int main(void)
// {
//     double a1 = 3.2;
//     double a2 = 3.7;
//     double a3 = -3.2;
//     double a4 = -3.7;
 
//     cout << "[C++] round example. BlockDMask" << endl;
//     cout << "round(3.2) : " << round(a1) << endl;
//     cout << "round(3.7) : " << round(a2) << endl;
//     cout << "round(-3.2) : " << round(a3) << endl;
//     cout << "round(-3.7) : " << round(a4) << endl;
 
//     cout << endl;
//     system("pause");
//     return 0;
// }


// 출처: https://blockdmask.tistory.com/336 [개발자 지망생]


