/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    char a;
    char p = '+';
    char m = '-';
    char x = '*';
    char d = '/';
    int res;
    
    cout <<"첫번째 숫자를 입력해 주세요.";
    cin >> num1;
    cout <<"부호를 입력해 주세요.";
    cin >> a;
    cout <<"두번째 숫자를 입력해 주세요.";
    cin >> num2;
    
    if (a == p){
        
        res = num1 + num2;
        cout << "결과값은 "<<num1<<" "<< a << " "<< num2 <<" = "<< res << " 입니다.";
    }
    else if (a == m){
        res = num1 - num2;
        cout << "결과값은 "<<num1<<" "<< a << " "<< num2 <<" = "<< res << " 입니다.";
    }
    else if (a == x){
        res = num1 * num2;
        cout << "결과값은 "<<num1<<" "<< a << " "<< num2 <<" = "<< res << " 입니다.";
    }
    else if (a == d){
        res = num1 / num2;
        cout << "결과값은 "<<num1<<" "<< a << " "<< num2 <<" = "<< res << " 입니다.";
    }
    else{
        cout << "값을 잘못 입력하셨습니다 다시입력해주세요.";
        return 0;
    }
    return 0;
}
