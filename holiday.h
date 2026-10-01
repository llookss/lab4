#pragma once
#include "dayOfyear.h"
namespace Gimseoyoung2630005
{
    class holiday
    {
        dayOfyear date;
        bool parkingEnforcemnt;
    public:
        holiday(dayOfyear d = dayOfyear{1,1}, bool p =false)
            : date{d}, parkingEnforcemnt{p}
            {}
        void print() const
        {
            date.print();
            if (parkingEnforcemnt)
                std::cout << "Parking laws will be enforced.\n";
            else
                 std::cout << "Parking laws will NOT be enforced.\n";
        }
        const dayOfyear& getDate() const {return date;}
        void setDate(const dayOfyear& d) {date=d;}

    };
}

// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 

// private 멤버변수 선언: 클래스1형 객체, 그 외 멤버변수 1개 이상

// public 멤버함수 인라인으로 정의

// -생성자: 모든 멤버변수 초기화, 기본값 설정

// -print: 표준스트림출력으로 멤버변수들 출력

// -클래스1형 객체의 접근함수를 참조형식으로 구현

