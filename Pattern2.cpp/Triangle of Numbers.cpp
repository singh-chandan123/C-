/*
Print the following pattern for the given number of rows.
Pattern for N = 4
The dots represent spaces.
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
          232
         34543
        4567654
       567898765
Sample Input 2:
4
Sample Output 2:
           1
          232
         34543
        4567654
*/


#include <iostream>
using namespace std;
int main() {
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
  //printing first half numbers
  int k=i;
  int s=1;
  while (s <= i) {
cout<<k;
s++;
      k++;
  }
  //printing another half 
  int m=1;
  int c=2*i-2;
  while(m<=i-1){
      cout<<c;
      c--;
      m++;
  }

  cout<<endl;
  i++;
}
}