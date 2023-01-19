//to find inverse of a number.

#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int mid_num=1, ans=0, num;
    cout<<"Enter your number here: ";
    cin>>num;
    while (num!=0){
        int rem= num%10;
        num=num/10;
        ans = ans + mid_num * pow(10,rem-1);
        mid_num++;
    }
    cout<<ans;
    return 0;
}
