#include<bits/stdc++.h>
using namespace std;
/*void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}*/
int main(){
    /*int n;
    cin>>n;
    int arr[n];--- user inputted size can be used to declare array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }*/
    /*
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }   
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        } 
        cout<<endl;  
    }*/
    /*
    int a,b;
    cin>>a>>b;
    cout<<a<<"\t"<<b<<endl;
    swap(a,b);/*-----in built function----
    cout<<a<<"\t"<<b<<endl;*/
    /*int x=10;
    int *p,**pp;
    p=&x;
    pp=&p;
    cout<<"value of x:"<<x<<endl;
    cout<<"value of x-address:"<<p<<endl;
    cout<<"value at x-address:"<<*p<<endl;
    *p=*p+1;
    cout<<"value of x:"<<x<<" "<<*p<<endl;
    cout<<"next block add."<<(p+1)<<endl;
    cout<<"add. of p"<<pp<<endl;
    cout<<"value at p"<<*pp<<endl<<"value at x:"<<**pp<<endl;*/
    int a[4];
    a[0]=1;
    a[1]=3;
    a[2]=5;
    a[3]=7;
    cout<<"value at a:"<<a<<endl<<"address of a[0]:"<<&a[0]<<endl;
    *a=*a+1;
    cout<<"address of next block:"<<(a+1)<<endl<<"value of add.a[1]:"<<&a[1]<<"value at a[1]:"<<*(a+1)<<endl<<*(&a[0]+1)<<endl<<a[1]<<endl;
    return 0;

}