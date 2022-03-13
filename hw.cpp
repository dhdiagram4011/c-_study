#include <iostream>
using namespace std;


// ==========================================================================================================
// x,y를 키보드로부터 입력받아 최대공약수를 산출하는 프로그램 작성
// 최대공약수는 gcd 함수를 이용하여 구하라
// gcd 는 반복문을 사용해야 한다

int main(void){  // --> main 함수 선언 안하면 메시지 발생 --> c++ Undefined symbols for architecture x86_64 , implicit entry/start for main executable
  int x; //입력받을 두 수 선언
  int y; //입력받을 두 수 선언
  int get_gcd(int x, int y); //최대공약수 구하기
  {
    std::cout << "두 수를 입력하세요" << std::endl;
    std::cin >> x;
    std::cin >> y;
    int max_num = 1;
    int range = min(x,y); // 20 ,15 --> 15  반환 //https://blockdmask.tistory.com/366


    for (int i = range; i >= 1; i--)  //15,14,13.... 대입
    {
        if ( x % i == 0 && y % i == 0) //20 == 5 , 15 == 5
        {
          max_num = i;
          break;
        }
    }
    std::cout << "두 수" << x << "," << y << "의 최대공약수 :" << max_num << std::endl;
    return max_num;
  }
}

