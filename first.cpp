/*
알파벳(char a = 'A';)이랑 파이(float PI = 3.14f)랑 더하니까 결과가 왜 이렇게 나오는지 알아보기

소수점 몇째자리까지 출력하게 어떻게 하는지 알아보기
예) 100/3.14f 같은 식의 결과가 소수점 둘째자리까지 출력해야 한다면 31.84 혹은 31.85 이런식으로 나오게 하는 방법을 알아보시오
*/

#include <iostream>
//#include <stdio.h> --> C

int main() {
  char a = 'A'; //065 
  float PI = 3.14f; //float 형의 경우 f 를 붙혀주고  double 형의경우  d 를 붙혀줌
  float result = a + PI; // 결과값을 담을 변수 지정

  std::cout << result;
  return 0;
}



// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "여러분의 나이를 입력해 주세요 : ";
//     cin >> age;
//     cout << "여러분의 나이는 " << age << "살 입니다." << endl;
//     return 0;
// }



