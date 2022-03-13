#include <iostream>
using namespace std;

struct Prop
{
    int savings;
    int loan;
};


int main(void)

{
    int CalcProperty(Prop*);
    int hong_prop;
    Prop hong = {10000000, 4000000};
    hong_prop = CalcProperty(&hong); // 구조체의 주소를 함수의 인수로 전달함.

    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan
        << "원을 제외한 총 " << hong_prop << "원입니다.";

    return 0;
}


int CalcProperty(Prop* money)

{
    money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
    return (money->savings - money->loan); // 구조체 포인터 , 종합선물세트 안에 있는 카스테라에 접근 A: 종합선물세트, B : 카스테라
}