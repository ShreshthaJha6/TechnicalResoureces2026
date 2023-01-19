//to print the reverse of a number

#include <iostream>
using namespace std;
int main(){
    int num,rev_num;
    cout<<"Enter the number here: ";
    cin>> num;
    while (num>0){
        rev_num=rev_num*10 + num%10;
        num=num/10;
    }
    cout<<"Reverse of the given number is: "<<rev_num;
    return 0;
}
