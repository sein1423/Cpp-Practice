// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
        
using namespace std;
int main()
{
    cout << "hi" << endl
        << "my name in "
        << "Psi" << endl;
    return 0;
}


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
