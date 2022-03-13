//정수 하나를 입력 받아서 그 약수들을 출력하는 프로그램을 작성하라.

#include <iostream>

int main() {

int i = 1;
int n;

//std::cout << "정수를 입력하세요" << std::endl;
// 99999를 입력받을때까지 숫자 계속 입력

  // while(true){

  //   if (n != 99999)
  //   {
  //     std::cout << "정수를 입력하세요" << std::endl;
  //     std::cin >> n;

  //     for(i=1; i<=n; i++){
  //     if (n%i == 0)
  //       std::cout << i << std::endl;
  //     }

  //   }

  //   else if (n == 99999)
  //   {
  //     std::cout << "프로그램을 종료합니다" << std::endl;
  //     return 0;
  //   }

  // }

//==========================================================================//

  while(true){

    std::cout << "정수를 입력하세요" << std::endl;
    std::cout << "99999를 입력하면 프로그램을 종료합니다" << std::endl;

    std::cin >> n;
    if (n == 99999)
      break;

    for(i=1; i<=n; i++){
    if (n%i == 0)
      std::cout << i << std::endl;
    }
  }
  return 0;
}


//int num1 = 3; //정수 하나 입력받음
//int num2 = 20; //--> // 1,2,4,5,10,20


