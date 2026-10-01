#pragma once

#include <iostream>

namespace Gimseoyoung2630005
{
    class dayOfyear
    {
        int month{}; //private 안써도됨
        int day{};
        void testMonth()
        {
            if ( (month<1) || (month>12))
            {
                std::cout << "Illegal month value!\n";
                std::exit(1);
            }
        }
        void testDay()
        {
        if ((day < 1) || (day > 31)) 
            {
                std::cout << "Illegal day value!\n";
                std::exit(1);
            }
        }
    public:
        dayOfyear(int n = 1, int d=1):month{n},day{d}
        {
            testMonth();
            testDay();
        }


        void input()
        {
            std::cout << "Enter month: ";
            std::cin >> month; testMonth();
            std::cout << "Enter day: ";
            std::cin >> day; testDay();
        }
        // freind hamsoo
        friend std::istream& operator>>(std::istream& is, dayOfyear& d)
        {   
            std::cout << "Enter month: ";
            is >> d.month; d.testMonth();
            std::cout << "Enter day: ";
            is >> d.day; d.testDay();
            return is;
        } 

        void setMonth(int m) {month = m; testMonth();}
        void setDay(int d) {day = d; testDay();}
        void print() const
        {
            switch(month)
            {
                case1: std::cout << "Jan. "; break;
                case2: std::cout << "Feb. "; break;
                case3: std::cout << "Mar. "; break;
                case4: std::cout << "Apr. "; break;
                case5: std::cout << "May. "; break;
                case6: std::cout << "Jun. "; break;
                case7: std::cout << "Jul. "; break;
                case8: std::cout << "Aug. "; break;
                case9: std::cout << "Sep. "; break;
                case10: std::cout << "Oct. "; break;
                case11: std::cout << "Nov. "; break;
                case12: std::cout << "Dec. "; break;
            } std::cout << day << "\n";
    
        }
        friend std::ostream& operator<<(std::ostream& os, const dayOfyear& d)
        {
            switch(d.month)
            {
                case1: os << "Jan. "; break;
                case2: os << "Feb. "; break;
                case3: os << "Mar. "; break;
                case4: os << "Apr. "; break;
                case5: os << "May. "; break;
                case6: os << "Jun. "; break;
                case7: os << "Jul. "; break;
                case8: os << "Aug. "; break;
                case9: os << "Sep. "; break;
                case10: os << "Oct. "; break;
                case11: os << "Nov. "; break;
                case12: os << "Dec. "; break;
            } os << d.day << "\n";
            return os;
        }
        int getMonth() const {return month;}
        int getDay() const {return day;}
         dayOfyear operator++()
           {
        
            ++day;//{12,32}
            if (day>31) 
            {
                ++month; 
                if (month>12) month-=12;
                day -= 31; 
            }
            return dayOfyear{month,day};
           }
           dayOfyear operator++(int)
           {
            dayOfyear temp{month,day};
            ++day;//{12,32}
            if (day>31) 
            {
                ++month; 
                if (month>12) month-=12;
                day -= 31; 
            }
                return temp;
            }

            friend bool operator==(const dayOfyear& d1, const dayOfyear& d2)
            {
                return d1.month == d2.month && d1.day == d2.day;
            }
            friend dayOfyear operator+(const dayOfyear& d1, const dayOfyear& d2)
            {
                return dayOfyear{d1.month + d2.month, d1.day + d2.day};
            }
    };
}
// 1. 본인이름학번의 네임스페이스
// -본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 1234567일 경우 KimPro1234567
// using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.
// -using 지시자 예: { using namespace std; cout << "Enter your id: "; }
// -네임스페이스 지정자 예: std::cout << "Enter your id: ";

// 2. 클래스명.h: 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언 (2개 이상)
// private 멤버함수 정의
// -test멤버변수1: 멤버변수1 범위가 아니면 프로그램 종료
// -test멤버변수2: 멤버변수2 범위가 아니면 프로그램 종료
// public 멤버함수 정의
// -input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출
// -set 접근함수들: 멤버변수 값 설정 및 test함수 호출
// -print: 표준스트림출력으로 멤버변수들 출력
// -get 접근함수들: 멤버변수 값 리턴

