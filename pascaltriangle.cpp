//To print pascal triangle.
// /*  1                                           
//     1 1                                         
//     1 2 1 
//     1 3 3 1
//     1 4 6 4 1
*/

#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    int t;
    for(t=num;t>=1;t--){
        fact=fact*t;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number of rows "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int k=factorial(i)/(factorial(i-j)*factorial(j));
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}