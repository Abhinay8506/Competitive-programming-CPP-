#include<iostream>
using namespace std;
/*int palindrome(string str){
    int l=0;
    int high=str.size()-1;
    int mid=(l+high)/2;
    int i=0;
    int flag=1;
    while(i<=mid){
        if(str[i]!=str[high]){
            flag=0;
            break;
        }
        else{
            i++;
            high--;
        }
    }
    return flag;
}
int main(){
    string str;
    getline(cin,str);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=palindrome(str.substr(a,(b-a)+1));
        if(ans==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}*/

/*given a string s of lowercase english alphabet of length N and two integers L and R 
,HE wants to know whether all letters of substring from index l to r(l and r included) 
can be rearranged to form a palindrome or not. for q values of l and r*/

/*SIMPLE APPROACH substring which can be arranged to form palindrome:should contain atmost one element with odd count*/


/*int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--){
            int l,r;
            cin>>l>>r;
            int hsh[26]={0};     //HASH ARRAY FOR STORING COUNT OF ALPHABETS IN SUBSTRING
            l--;
            r--;
            for(int i=0;i<r;i++){
                hsh[s[i]-'a']++;
            }

            int oddct=0;
            for(int i=0;i<26;i++){
                if(hsh[i]%2!=0)  //CHECKING ODD COUNT
                   oddct++;
                
            }
            if(oddct>1)
               cout<<"NO\n";
            else
               cout<<"YES\n";

            
        }
    }
    return 0;
}*/


/*OPTIMISED APPROACH:  HASH+PREFIX  */
const int N=1e7+10;
int hsh[N][26];
int main(){
    int t;
    cin>>t;
    while(t--){
    
        int n,q;
        cin>>n>>q;
        for (int i=0;i<n;i++) 
		{
			for (int j=0;j<26;j++) 
			{
				hsh[i][j]=0 ; 
			}
		}
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            hsh[i+1][s[i]-'a'];
        }
        for(int i=0;i<26;i++){
            for(int j=1;j<=n;j++){
                hsh[j][i]=hsh[j][i]+hsh[j-1][i];
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r; 
            
            int oddct=0;
            for(int i=0;i<26;i++){
                int charcout=hsh[r][i]-hsh[l-1][i];
                if(charcout%2!=0)
                     oddct++;
            }
            if(oddct>1)
               cout<<"NO\n";
            else
               cout<<"YES\n";
                
            }
            
        }
        return 0;
    }
    

