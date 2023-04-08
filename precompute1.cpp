#include<bits/stdc++.h>

#include<iostream>

using namespace std;

/*FACTORIAL OF GIVEN NUMBER*/
/*int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fact=1;
        for(int i=1;i<=n;i++){    //COMPLEXITY:ORDER OF 10^10:O(T)*O(n)
            fact=(fact*i)%m;
        }
        cout<<fact<<endl;
    }
}*/

/*PRE-COMPUTATION VERSION OF FACTORIAL*/
/*const int N=1e5+10;
long long int fact[N];
int main(){
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){    /*pre-computation
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        int n;                 complexity reduces to order 10^5:o(t)+o(n)
        cin>>n;
        cout<<fact[n]<<endl;
    }
    return 0;

}*/


