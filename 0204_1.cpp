#include <iostream>
#define MAX_CNT 5 //배열크기선언

//배열 값 출력

int main(){

  int arr[MAX_CNT] = {1,2,3,4,5}; //2씩 증가 --> {3,4,5,6,7}
  int i;

  //포인터 변수 선언

  //첫번째 요소를 가리키는 포인터 변수
   //깊은관계 --> 주소침범 //배열의 주소값
  int *ptr = (arr+0);

  //for문으로 배열 2씩 증가
  for(i=0; i<=4; i++) {
    std::cout << *(arr+i) << std::endl; // --> 1,2,3,4,5
  }

// 배열 값 변경
//arr[0]

// 변수의 값 변경
int a = 3; 
a = 1;


  std::cout << ptr << std::endl;

  //std::cout << "5개의 정수를 입력하세요" << std::endl; //5개의 정수 입력받기

  // std::cout << arr[0] << std::endl;
  // std::cout << arr[4] << std::endl;
  // return 0;
}



//입력받은 역순으로 출력하기
//
// while(true){

//     std::cout << "정수를 입력하세요" << std::endl;
//     std::cout << "99999를 입력하면 프로그램을 종료합니다" << std::endl;

//     std::cin >> n;
//     if (n == 99999)
//       break;

//     for(i=1; i<=n; i++){
//     if (n%i == 0)
//       std::cout << i << std::endl;
//     }
//   }
//   return 0;
// }

//


