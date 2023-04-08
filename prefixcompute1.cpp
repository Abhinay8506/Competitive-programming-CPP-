#include<bits/stdc++.h>

#include<iostream>

using namespace std;

/*PREFIX COMPUTATION MEANS COMPUTATION FROM FIRST INDEX*/
/* DISPLAYING THE SUM OF ELEMENTS FROM L-INDEX TO R-INDEX OF ARRAY*/
/*
const int N=1e5+10;
int arr[N];
int hasharray[N]; //HASHARRAY STORES THE SUM OF ELEMENT UPTO I FROM INDEX-1
int main(){
      int n;
      cin>>n;
      for(int i=1;i<=n;i++){
        cin>>arr[i];
        hasharray[i]=hasharray[i-1]+arr[i];
      }
      int t;
      cin>>t;
      while(t--){
        int l,r;
        cin>>l>>r;
        cout<<(hasharray[r]-hasharray[l-1])<<endl;
      }

}*/

/*finding sum of elements in square formed by (a,b) at top left and (c,d) at bottom right*/
const int N=1e3+10;
/*int arr[N][N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int sum=0;
        for(int i=a;i<=c;i++){
            for(int j=b;j<=d;j++){
                sum=sum+arr[i][j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}*/

/*prefix-computation version*/

int arr[N][N];
int hasharray[N][N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            hasharray[i][j]=arr[i][j]+hasharray[i-1][j]+hasharray[i][j-1]-hasharray[i-1][j-1];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(hasharray[c][d]-hasharray[a-1][d]-hasharray[c][b-1]+hasharray[a-1][b-1])<<endl;
    }
}
