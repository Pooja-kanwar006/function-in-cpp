#include <iostream>
#include <list>
using namespace std;
list<int> primeNum(int num)
{
    list<int> primeNumber = {2};

    for (int i = 3; i <= num; i++)
    {
        bool prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            primeNumber.push_back(i);
        }
    }

    return primeNumber;
}
int main()
{

    int number;
    cout << "enter number:";
    cin >> number;
    list <int> Final_prime = primeNum(number);
    cout << "prime numbers are:"<<endl ;
    for (const int &num : Final_prime)
    {
        std::cout << num << " ";
    }
    return 0;
}