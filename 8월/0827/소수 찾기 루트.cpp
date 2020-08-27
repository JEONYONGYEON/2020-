#include <iostream>
 
using namespace std;
bool prime(int n)
{
    if(n<2)return false;
    for(int j=2; j*j<=n; j++)
    {
        if((n%j) == 0) 
        return false;
    }
    return true;
}
int main(){
 
    int n,a[100+1]={};
    int cnt =0;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(prime(a[i])){cnt++;}
    }
    
    cout<<cnt<<endl;
    return 0;
}

