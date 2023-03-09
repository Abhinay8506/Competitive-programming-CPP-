/* LEETCODE PROBLEM PASCAL TRIANGLE 118*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        int arr[n][n];
        vector<vector<int>>num;
        arr[0][0]=1;
        for(int i=1;i<n;i++){
            arr[i][0]=1;
            arr[i][i]=1;
            for(int j=1;j<i;j++){
               arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
               
            }
        }
        for(int i=0;i<n;i++){
            vector<int>num2;
            for(int j=0;j<=i;j++){
                  num2.push_back(arr[i][j]);
            }
            num.push_back(num2);
        }
        return num;

        
    }
};

/*LEETCODE PROBLEM 119 PRINTING RTH ROW OF PASCAL TRIANGLE*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<int>num;
        int arr[n][n];
        arr[0][0]=1;
        for(int i=1;i<n;i++){
            arr[i][0]=1;
            arr[i][i]=1;
            for(int j=1;j<i;j++){
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }        
        }
        for(int j=0;j<n;j++){
            num.push_back(arr[rowIndex][j]);
        }
        return num;
        
    }
};
/*LEETCODE PROBLEM-169 MAJORITY ELEMENT*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       long int n=nums.size();
       long int pos=0,i=0;
       long int count=0;
       while(i<n){   
           long int sum=0;
           long int j=0;
           while(j<n){
               if(nums[i]==nums[j]){
                   sum=sum+1;
               }
               j++;
               
           }
           if(sum>count){
                   count=sum;
                   pos=i;
            }
            i++;

       }
       return nums[pos];
    }
};
