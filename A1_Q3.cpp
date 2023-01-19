//prime or not
#include <iostream>
using namespace std;
int main(){
    int t,n,i,j,count;
    cout<<"Enter the number of tests: ";     
    cin>>t;
    for (i=1;i<=t;i++){
        cout<<"Enter the number here: ";          
        cin>>n;
        count=0;
        for (j=2;j<n;j++){                       
            if (n%j==0){                         
                count++;                         
            }
        }
        if (count==0){
            cout<<"The given number is Prime.\n";
        }
        else {
            cout<<"The given number is non-Prime\n";
        }
    }
    return 0;
}
