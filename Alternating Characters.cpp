/*
https://www.hackerrank.com/challenges/alternating-characters

You are given a string containing characters and only, your task is to change it into a string such that every two consecutive characters are different. To do this, you are allowed to delete the one or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, string should be changed to by deleting one character .

Input Format

The first line contains an integer , i.e. the number of test cases.
The next lines contain a string each.

Constraints

    length of string

Output Format

For each test case, print the minimum number of deletions required.

Sample Input

5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB

Sample Output

3
4
0
0
4

Explanation

AAAA A, 3 deletions
BBBBB B, 4 deletions
ABABABAB ABABABAB, 0 deletions
BABABA BABABA, 0 deletions
AAABBB AB, 4 deletions because to convert it to AB we need to delete 2 A's and 2 B's
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

//using stack to input only non-repeated characters 
void AlternateChar(string s){
    
    stack<char> c;
    
    int i=1;
    
    c.push(s[0]);
    int count=0;
    
    while(s[i]){
       if(c.top()==s[i])
           count++;
        else c.push(s[i]);
        
        i++;
    }
    
    cout<<count<<endl;
}

int main() {
    int tc; // test case
    cin>>tc;
    string s;
    
    while(tc--){
        cin>>s;
        
        AlternateChar(s);
    }
    
    
    return 0;
}
