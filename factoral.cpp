#include <iostream>
using namespace std;
int factorial(int number){
int fact = 1;
for (int i =number;i>1;i--){
fact*=i;
}

return fact;
}

int main()
{

    int number;
    cout << "enter number:";
    cin >> number;
    int facto = factorial(number);
    cout << "factorail of number is:" << facto;
    return 0;
}