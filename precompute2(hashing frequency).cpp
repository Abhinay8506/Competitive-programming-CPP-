#include<bits/stdc++.h>

#include<iostream>

using namespace std;

/* DISPLAYING OCCURRENCES OF PARTICULAR ELEMENT IN ARRAY*/
/*const int N=1e5+10;
const int M=1e7+10;
int arr[N];
int ele[M];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<M;j++){
        int count=0;
        for(int i=0;i<n;i++){
            if(j==arr[i]){
                count++;
            }
        }
        ele[j]=count;
    }
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        cout<<ele[m]<<endl;
    }
    return 0;

    
}*/

/*PRE-COMPUTATION VERSION*/
/*const int N=1e5+10;
const int M=1e7+10;
int arr[N];
int ele[M];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ele[arr[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        cout<<ele[m]<<endl;
    }
    return 0;

    
}*/
