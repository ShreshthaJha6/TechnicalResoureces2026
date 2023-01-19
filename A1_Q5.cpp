//program to count digits in a number.

#include <iostream>
using namespace std;
int main(){
    int num,digits=0,i;
    cout<<"Enter the number here: ";
    cin>>num;
    while (num>0){
        num=num/10;
        digits++;
    }
    cout<<"There are "<<digits<<" digits in the given number.";
    return 0;
}
