#include<bits/stdc++.h>
using namespace std;
int main(){
  /*  TOO LAZY TO NAME QUESTION--
	int a,b,c;
	cin>>a>>b>>c;
	int cnum;
	for(int i=2;c>0;i++){
		if((i%a==0)||(i%b==0)){
			c--;
			cnum=i;
		}
	}
	int lcm;
	for(int i=1;i<=a*b;i++){
		if((i%a==0)&&(i%b==0)){
			lcm=i;
			break;
		}
	}
	int step;
	if((cnum%a==0)&&(cnum%b==0)){
		step=lcm;
	}
	else if(cnum%a==0){
		step=a;
	}else{
		step=b;
	}
   for(int i=cnum;i>=0;i=i-step){
	   cout<<i<<" ";
   }*/
  
  
  /* PASCAL TRIANGLE
  int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int a[n][n];
		a[0][0]=1;
		for(int i=1;i<n;i++){
                         a[i][0]=1;
			 a[i][i]=1;
			 for(int j=1;j<i;j++){
				 a[i][j]=a[i-1][j-1]+a[i-1][j];
			 }
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}

	}*/
  /* MONK AND HIS LOVE FOR PRIME
  
  string str;
	cin>>str;
	long long int suml=0;
	for(int i=0;i<str.size();i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]=str[i]+'a'-'A';
			suml=suml-str[i];
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i]=str[i]-'a'+'A';
			suml=suml+str[i];
		}
		
	}
	if(suml<0){
		suml=suml*(-1);
	}
	int flag=0;
	for(int i=2;i<suml;i++){
		if(suml%i==0){
			flag=1;
			break;
		}
	}
	cout<<(!flag)<<endl;*/
}
