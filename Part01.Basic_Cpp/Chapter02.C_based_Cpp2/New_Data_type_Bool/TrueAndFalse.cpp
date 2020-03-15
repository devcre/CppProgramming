#include <iostream>
using namespace std;

int main(void){
    int num = 10;
    int i = 0;

    cout << "true: " << true << endl;
    cout << "false: " << false << endl;

    while(true){
        cout << i++ << ' ';
        if(i > num){
            break;
        }
    }
    cout << endl;

    cout << "sizeof 1: " << sizeof(1) << endl;
    cout << "sizeof 0: " << sizeof(0) << endl;
    cout << "sizeof true: " << sizeof(true) << endl;
    cout << "sizeof false: " << sizeof(false) << endl;
    return 0;
}

// 여기서 true와 false가 각각 1과 0을 의미하는 키워드라고 잘못이해하면 안된다.
// 이 둘은 '참'과 '거짓'을 표현하기 위한 1바이트 크기의 데이터일 뿐이다.

// 따라서 true와 false를 굳이 숫자에 연결시켜서 이해하는 것은 지양해야 한다.
// true와 false는 그 자체를 '참'과 '거짓'을 나타내는 목적으로 정의된 데이터로 인식하는 것이 바람직하다.