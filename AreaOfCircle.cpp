#include <iostream>
using namespace std;
float areaOfCircle(int radius){
float area=3.14*radius*radius;
return area;
}
int main(){

int radius;
cout<<"enter radius:";
cin>>radius;
float area = areaOfCircle(radius);
cout<<"area of circle is:"<<area;
return 0;
}