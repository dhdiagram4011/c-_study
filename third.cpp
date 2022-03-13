#include<iostream>
using namespace std;

int main() {



// //int i = 0;
// int num = 10;


// for (int i = 0; i < num; i++) //수명이 괄호 안에서 끝남 --> 보통 이렇게 씀

// {
//     cout << "for 문이 현재 " << i + 1 << " 번째 반복 수행중입니다." << endl;
// }


// for (int i = 0; i < num; i++) //수명이 괄호 안에서 끝남 --> 보통 이렇게 씀

// {
//     cout << "for 문이 현재 " << i + 1 << " 번째 반복 수행중입니다." << endl;
// }


//cout << "for 문이 종료된 후 변수 i의 값은 " << i << "입니다." << endl;

// int i = 0;
// int num = 10;

// while (i < num)

// {

//     cout << "while 문이 현재 " << i + 1 << " 번째 반복 실행중입니다." << endl;

//     i++; // 이 부분을 삭제하면 무한 루프에 빠지게 됨

// }

// cout << "while 문이 종료된 후 변수 i의 값은 " << i << "입니다." << endl;

// char ch = 'C';

// switch (ch)

// {
//     case 'a':
//     case 'A':
//         cout << "이 학생의 학점은 A입니다." << endl;

//         break;

//     case 'b':
//     case 'B':
//         cout << "이 학생의 학점은 B입니다." << endl;

//         break;

//     case 'c':
//     case 'C':
//         cout << "이 학생의 학점은 C입니다." << endl;

//         break;

//     case 'd':
//     case 'D':
//         cout << "이 학생의 학점은 D입니다." << endl;

//         break;

//     case 'f':
//     case 'F':
//         cout << "이 학생의 학점은 F입니다." << endl;

//         break;

//     default:
//         cout << "학점을 정확히 입력해 주세요!(A, B, C, D, F)" << endl;

//         break;
// }


// switch (num)
// {

//     case 1:

//         cout << "입력하신 수는 1입니다." << endl;

//         break;

//     case 2:

//         cout << "입력하신 수는 2입니다." << endl;

//         break;

//     case 3:

//         cout << "입력하신 수는 3입니다." << endl;

//         break;

//     case 4:

//         cout << "입력하신 수는 4입니다." << endl;

//         break;

//     case 5:

//         cout << "입력하신 수는 5입니다." << endl;

//         break;

//     default:

//         cout << "1부터 5까지의 수만 입력해 주세요!" << endl;

//         break;

// }



// if (num < 5)
// {
//     cout << "입력하신 수는 5보다 작습니다." << endl;
// }

// else if (num == 5)
// {
//     cout << "입력하신 수는 5입니다." << endl;
// }
// else
// {
//     cout << "입력하신 수는 5보다 큽니다." << endl;
// }



// if (num < 5)
// {
//     cout << "입력하신 수는 5보다 작습니다." << endl;
// }

// else
// {
//   if (num == 5)
//     {
//         cout << "입력하신 수는 5입니다." << endl;
//     }
//     else
//     {
//         cout << "입력하신 수는 5보다 큽니다." << endl;
//     }
// }


// if (num < 5)
// {
//     cout << "입력하신 수는 5보다 작습니다." << endl;
// }

// if (num == 5)
// {
//     cout << "입력하신 수는 5입니다." << endl;
// }

// if (num > 5)
// {
//     cout << "입력하신 수는 5보다 큽니다." << endl;
// }


// int num1 = 11;
// int num2 = 10;
// int result;

// result = (num1 < num2) ? num1 : num2; //(참 : 거짓)
// cout << "둘 중에 더 작은수는 " << result << "입니다.";


// int num1 = 3;
// int num2 = -7;

// bool result1, result2;

// result1 = (num1 > 0) && (num1 < 5);
// result2 = (num2 < 0) || (num2 > 10); // 하나만 참이면 참


// cout << "&& 연산자에 의한 결괏값은 " << result1 << "입니다." << endl; //True
// cout << "|| 연산자에 의한 결괏값은 " << result2 << "입니다." << endl; 
// cout << " ! 연산자에 의한 결괏값은 " << !result2 << "입니다." << endl; //ngative 연산자 1 -> 0 , 0 -> 1로 리턴

// int num1 = 3;
// int num2 = 7;

// cout << "!= 연산자에 의한 결괏값은 " << (num1 != num2) << "입니다." << endl;
// cout << ">= 연산자에 의한 결괏값은 " << (num1 >= num2) << "입니다.";

// int num1 = 8;
// int num2 = 8;
// int result1, result2;

// result1 = --num1  + 5;
// result2 = num2--  + 5;

// cout << "전위 감소 연산자에 의한 결괏값은 " << result1 << "이고,변수의 값은 " << num1 << "로 변했습니다." << endl;
// cout << "후위 감소 연산자에 의한 결괏값은 " << result2 << "이고, 변수의 값은 " << num2 << "로 변했습니다." << endl;



// int num1 = 8;
// int num2 = 8;
// int num3 = 8;

// num1 = num1 + 5;
// num2 += +5;
// num3 = +5;

// cout << "- 연산자에 의한 결괏값은 " << num1 << "입니다." << endl;
// cout << "+= 연산자에 의한 결괏값은 " << num2 << "입니다." << endl;
// cout << "=+ 연산자에 의한 결괏값은 " << num3 << "입니다.";
// return +0; //모든 상수에는 + 생략(모든 양의 상수에는 + 생략)

return 0;
}


