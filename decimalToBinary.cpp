#include <iostream>
using namespace std;
#include <cmath>
int binaryToDecimal(int num)
{
     int binary=0;
    int i = 0;
    while (num >= 0)
    {
        int bit=num%2;
        
       binary+=bit*pow(10,i++);
        num = (num / 2);
    }
    return binary;
}
int main()
{
    int num;
    cout << "enter number:" << endl;
    cin >> num;

    int result = binaryToDecimal(num);
    cout << "binary conversion:" <<result;
  

}