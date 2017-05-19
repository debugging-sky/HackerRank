/*
https://www.hackerrank.com/challenges/reduced-string


Super Reduced String

Steve has a string, , consisting of lowercase English alphabetic letters. In one operation, he can delete any pair of adjacent letters with same value. For example, string "aabcc" would become either "aab" or "bcc" after operation.

Steve wants to reduce as much as possible. To do this, he will repeat the above operation as many times as it can be performed. Help Steve out by finding and printing 's non-reducible form!

Note: If the final string is empty, print Empty String .

Input Format

A single string, .

Constraints

Output Format

If the final string is empty, print Empty String; otherwise, print the final non-reducible string.

Sample Input 0

aaabccddd

Sample Output 0

abd

Sample Case 0

Steve can perform the following sequence of operations to get the final string:

    aaabccddd ? abccddd
    abccddd ? abddd
    abddd ? abd

Thus, we print abd.

Sample Input 1

baab

Sample Output 1

Empty String

Explanation 1

Steve can perform the following sequence of operations to get the final string:

    baab ? bb
    bb ? Empty String

Thus, we print Empty String.

Sample Input 2

aa

Sample Output 2

Empty String

Explanation 2

Steve can perform the following sequence of operations to get the final string:

    aa ? Empty String

Thus, we print Empty String.


*/

#include <cmath>



#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;


int main() {
    char s[100];
     cin>>s;
    
    stack<char> c;
    stack<char> result;
    for(int i=0;i<strlen(s);i++){
        
       if(c.empty())
            c.push(s[i]);
        
        
        else if(c.top()==s[i])
            c.pop();
        
        else
        c.push(s[i]);
        
    }
    
    while(!c.empty()){
       
        int temp=c.top();
        c.pop();
        result.push(temp);
    }
    
    
    if(result.empty())
       {cout<<"Empty String"; }
    
    
    
    while(!result.empty()){
       
         cout<<result.top();
        result.pop();
    }
    
        return 0;
}
