#include <iostream>
using namespace std;
int main() {
    double a, b;
    double result;
    int choice;
    
    cout << "첫 번째 계산할 값을 입력하세요 ==>" << endl;
    cin >> a;
    cout << "<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈" << endl;
    cin >> choice;
    cout << "두 번째 계산할 값을 입력하세요 ==>" << endl;
    cin >> b;
    while(true){
        if(choice == 1){
        result = a + b;
        cout << a << "+" << b << "=" << result << endl;
        break;
    }
    else if(choice == 2){
        result = a - b;
        cout << a << "-" << b << "=" << result << endl;
        break;
    }
    else if(choice == 3){
        result = a * b;
        cout << a << "*" << b << "=" << result << endl;
        break;
    }
    else if(choice == 4){
        if(b == 0) {
            cout << "0으로 나눌 수 없습니다." << endl;
            return 1; // Exit if division by zero
        }
        result = a / b;
        cout << a << "/" << b << "=" << result << endl;
        break;
    }
    else {
        cout << "잘못된 연산입니다. 다시 선택하세요" << endl;
        cin >> choice;
        continue;
    }
    }
    

    return 0;
}