#include <iostream>
using namespace std;

// 최대 약수를 구하는 프로그램 (최대약수) --> 최대값

// int main(void){
//   std::cout << "최대 약수를 구할 정수를 입력하시오" << std::endl;

// }

int main(void){
  int factor(int num);
    int num; // num = 12
    std::cout << "최대 약수를 구할 정수를 입력하시오:" << std::endl;
    std::cin >> num; //num =12
    for (int i = 1; i <= num; i++)
    {
      if ( num/i ==2 && num % i == 0)
        std::cout << "최대 약수는 :" << i << std::endl;
    }
  }