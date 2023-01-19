//to print the prime numbers in the given range.

#include <iostream>
using namespace std;
bool isprime(int n){
    int count=0,p ;
    for (int i=1;i<n;i++){
        if (n%i==0){
        count++;
        }
    }
    int m = (count==1);
    if (m==1){
       p=1 ;
    }
    else{
        p=0;
    }
    return p;
}

int main(){
    int high, low, i,n;
    cout<<"Enter the higher limit of the range: ";
    cin>>high;
    cout<<"Enter the lower limit of the range: ";
    cin>>low;
    for (i=low;i<=high;i++){
        if (isprime(i)==1){
            cout<<i<<endl;
        }
    }
    return 0;
}
