/*
Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5
The dots represent spaces.
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/


#include<iostream>
using namespace std;
int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
 int n;
 cin>>n;
 int m=n/2+1;
//first half
for(int i=1;i<=m;i++){
  //printing spaces 
  for(int j=1;j<=m-i;j++){
    cout<<" ";
  }
  //printing stars
  for(int k=1;k>=1&&k<=2*i-1;k++){
    cout<<"*";
  }
  cout<<endl;
}

//second half
// n=n-m;
for(int i=n;i>=1;i--){
  //spaces
for(int k=1;k<=m-i;k++){
  cout<<" ";
}
//stars
for(int j=1;j>=1&&j<=2*i-1;j++){
  cout<<"*";
}
cout<<endl;
}

}
