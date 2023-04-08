#include<bits/stdc++.h>

#include<iostream>

using namespace std;
/* DABANG PATTERN*/
int main(){
    int n,i;
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int star=2*i-2;
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        int k=n-i+1;
        while(k){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

/* printing each word of string in new line*/
int main() {
    char arr[100];
    
    // Input using the getline function.
    cin.getline(arr, 100); 
    char separator = ' ';
    int i = 0;
    
    // Temporary string used to split the string.
    string s; 
    while (arr[i] != '\0') {
        if (arr[i] != separator) {
            // Append the char to the temp string.
            s += arr[i]; 
        } else {
            cout << s << endl;
            s.clear();
        }
        i++;

    }
    
    // Output the last stored word.
    cout << s << endl; 
}

