// using을 사용할 때 프로그램 전체영역에 효력을 미치게 하려면 전역변수와 마찬가지로 함수 밖에 선언을 해야 한다.

#include <iostream>

// using 선언을 함수 밖에 전역의 형태로 삽입하였다. 따라서 이제부터는 cin, cout, endl의 사용에 있어서 이름공간의 지정이 불필요하다.
using std::cin;
using std::cout;
using std::endl;

int main(void){
    int num = 20;
    cout << "Hello World!" << endl;
    cout << "Hello " << "World!" << endl;
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;
    return 0;
}