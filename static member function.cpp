#include<iostream>
using namespace std;


class car{
public:
 static int wheels;

static void showwheel(){
cout<<"wheels are"<<wheels<<endl;
}
};

int car::wheels = 4;

int main(){
car::showwheels();
return 0 ;
}
