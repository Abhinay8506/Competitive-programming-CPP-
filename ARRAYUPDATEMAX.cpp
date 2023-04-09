#include <bits/stdc++.h>

using namespace std;

/*int main(){
    int n,t;
    cin>>n>>t;
    int arr[n+1]={0};
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        for(int i=a;i<=b;i++){
            arr[i]=arr[i]+k;
        }
        /*for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,arr[i]);
    }
    cout<<ans<<endl;
    return 0;
    
}*/


/*const int  N=1e7+10; 
long long int arr[N]={0};
int main(){
    int n,t;
    cin>>n>>t;
   
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        for(int i=a;i<=b;i++){
            arr[i]=arr[i]+k;
        }
    }
    long long int ans=-1;
    for(int i=1;i<=n;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;    
}*/


//OPTIMISED PREFIX COMPUTATION
const int  N=1e7+10; 
long long int arr[N]={0};
int main(){
    int n,t;
    cin>>n>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a]=arr[a]+k;
        arr[b+1]=arr[b+1]-k;
        
    }
    for(int i=1;i<=n;i++){
            arr[i]=arr[i-1]+arr[i];
     }
    long long int ans=-1;
    for(int i=1;i<=n;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
    
}
