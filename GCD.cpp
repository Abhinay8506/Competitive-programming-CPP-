#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*int main(){
    int a,b;
    cin>>a>>b;
    int gcd;
    if(a<b){
        for(int i=1;i<=a;i++){
             if((a%i==0)&& (b%i==0)){
                gcd=i;
            }
        }
    }
    else{
        for(int i=1;i<=b;i++){
            if((a%i==0)&& (b%i==0)){
                gcd=i;
            }
        }
    }
    cout<<gcd<<endl;
    return 0;
}*/
/*int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int gc=0;
            for(int i=1;i<=l-1;i++){
                gc=__gcd(gc,arr[i]);   //INBUILT __GCD(INT,INT)  FUNCTION 
            }
            for(int i=r+1;i<=n;i++){
                gc=__gcd(gc,arr[i]);
            }
            cout<<gc<<endl;
        }
    }
}*/

//OPTIMISED PRE-COMPUTATION VERSION
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+1];
        int f[n+1];
        int b[n+1];
        f[0]=b[n+1]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            f[i]=__gcd(f[i-1],arr[i]);
        }
        for(int i=n;i>=1;i--){
            b[i]=__gcd(b[i+1],arr[i]);
        }
        
        while(q--){
            int l,r;
            cin>>l>>r;
            
            cout<<__gcd(f[l-1],b[r+1])<<endl;
        }
    }
    return 0;
}
