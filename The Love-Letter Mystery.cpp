/*
https://www.hackerrank.com/challenges/the-love-letter-mystery

The Love-Letter Mystery 
by amititkgp
Problem
Submissions
Leaderboard
Discussions
Editorial
Topics
James found a love letter his friend Harry has written for his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.

To do this, he follows two rules:

He can reduce the value of a letter, e.g. he can change d to c, but he cannot change c to d.
In order to form a palindrome, if he has to repeatedly reduce the value of a letter, he can do it until the letter becomes a. Once a letter has been changed to a, it can no longer be changed.
Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.

Input Format

The first line contains an integer , i.e., the number of test cases. 
The next  lines will contain a string each. The strings do not contain any spaces.

Constraints 
 
 length of string  
All characters are lower case English letters.

Output Format

A single line containing the number of minimum operations corresponding to each test case.

Sample Input

4
abc
abcba
abcd
cba
Sample Output

2
0
4
2
Explanation

For the first test case, abc -> abb -> aba.
For the second test case, abcba is already a palindromic string.
For the third test case, abcd -> abcc -> abcb -> abca = abca -> abba.
For the fourth test case, cba -> bba -> aba.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;


int main() {
    int tc;
    cin>>tc;
    
    while(tc--){
        string s;
        cin>>s;
        
        int i=0;
        int count=0;
        
        int len=s.size()-1;     // length i=of string
        int half_len=s.size()/2;   // length till half
        
        for(int j=0;j<=half_len-1;j++){            // for palinndrome character need to be same at same distance from extreme ends 
            count+=abs(int(s[j]-s[len-j]));        // like _ _x_ _ _x_ _ ,  I calculated the gap b/w the characters to make it 
        }                                          // palindrome  and added to count
        
        cout<<count<<endl;
        
    }
    return 0;
}
