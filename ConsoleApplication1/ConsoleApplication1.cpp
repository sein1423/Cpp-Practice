// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
        
using namespace std;
int change_val(int* p) {
    *p = 3;

    return 0;
}

int& function() {
    int a = 2;
    return a;
}

int main()
{
#pragma region 기본입출력


   /* cout << "hi" << endl
        << "my name in "
        << "Psi" << endl;
    return 0;*/

    //std = namespace (지역) 
    //cout = 명령어 이름
    //std:cout = std 안에 있는 cout명령어를 호출 한다는 의미
    //std:: 없이 그냥 cout 이라고 한다면 컴파일러가 cout 을 찾지 못합니다. 
    //서울에 사는 철수인지 부산에 사는 철수 인지 알 길이 없기 때문이지요.

    //다른 네임스페이스를 선언하고 헤더파일로 불러올 수 있음
    //ex) #include "header1.h"
    //using 명령어를 사용해서 해당 네임스페이스만 사용한다고 선언하면 앞에
    //네임스페이스를 안붙혀도됨 근데 별로 추천하지는 않음

    //cout = ostream클래스의 객체 표준 출력을 담당
    //endl = 화면에 출력해주는 함수
    //std::cout << std::endl; -> printf("\n"); 과 같은 결과
    //그렇다고 << =\n인건 아님 오히려 +에 좀더 가까움


#pragma endregion
#pragma region 참조자
    //int number = 5;

    /*std::cout << number << std::endl;
    change_val(&number);
    std::cout << number << std::endl;*/

    //number의 포인터를 지정해 안에 값을 3으로 직접 변경해줌

    /*int a = 3;
    int& another_a = a;

    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;*/
    //레퍼런스 = 별명 앝은복사를 해서 가르키는 값이 같아지는 느낌
    //레퍼런스는 어떤 변수의 참조자가 되어버리면 더이상 다른 변수를 참조할 수 없음
    //레퍼런스는 오히려 포인터 변수보다는 상수(const)에 좀 더 가까움
 /*   int x;
    int& y = x;
    int& z = y;

    x = 1;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;*/
    //int& x = 5 이런식으로는 불가능한 리터럴값은 레퍼런스로 참조할수없음
    //근데 상수 참조자로 선언하면 또 이게 가능함 
    //ex)const int &ref = 4;
    //int a = ref;
    //이거는 a=4랑 동일함
    int b = function();
    //b = 5; 
    std::cout << b << std::endl;
    
    //레퍼런스는 함수 리턴도 가능함 int& function()이런식으로 작성해서 return해주면 됨
    //근데 프로그램을 위와 같이 작성한다면 함수가 끝남과 동시에 function안에 있는
    //a값이 사라져서 조심해야함
    //원래 참조 하던 것이 사라진 레퍼런스를 댕글링 레퍼런스 (Dangling reference) 라고 부릅니다.
    //레퍼런스를 리턴하는 함수에서 지역 변수의 레퍼런스를 리턴하지 않도록 조심해야 함
    
#pragma endregion

}
