
/*
https://www.hackerrank.com/challenges/funny-string

Suppose you have a String, , of length that is indexed from to . You also have some String, , that is the reverse of String . is funny if the condition is true for every character from to .

Note: For some String , denotes the ASCII value of the -indexed character in . The absolute value of an integer, , is written as .

Input Format

The first line contains an integer, (the number of test cases).
Each line of the subsequent lines contain a string, .

Constraints

Output Format

For each String (where ), print whether it is or on a new line.

Sample Input

2
acxz
bcxz

Sample Output

Funny
Not Funny

Explanation

Test Case 0:



As each comparison is equal, we print .

Test Case 1:
, but
At this point, we stop evaluating (as ) and print . 

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;

void FunnyString(string s,string r){
    
    
    int flag=0;
    
    for(int i=0;i<s.size()-2;i++){
        
        int d=abs(s[i+1]-s[i]);    //abs is absolute abs(5-6)=1 
        int rd=abs(r[i+1]-r[i]);
        
        if(d!=rd)
           {
              flag=1;
              cout<<"Not Funny\n";
              break;
          }
      }
    
    if(flag==0)
            cout<<"Funny\n";
}

int main() {
    int tc; // num of test cases
    cin>>tc;
    
    string s;  // input string
    string r;  // reversed string
    
    while(tc--){
        cin>>s;
        r=s;
        reverse(s.begin(),s.end());
        
        FunnyString(s,r);
    }
    
    return 0;
}
