/*
Print the following pattern
Pattern for N = 4
Hint
As taught in the video, you just have to modify the code so that instead of printing numbers, it should output stars ('*').
The dots represent spaces.
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/


#include<iostream>
using namespace std;
int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
  cin>>n;

//first printing space 
int i=1;
while(i<=n){
  int j=1;
  while(j<=n-i){
    cout<<" ";
    j++;
  }
  //printing stars
  int k=1;
  while(k>=1&&k<=2*i-1){
    cout<<"*";
    k++;
  }
  cout<<endl;
  i++;
}

}

