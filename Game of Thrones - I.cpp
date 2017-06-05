
/*

https://www.hackerrank.com/challenges/game-of-thrones

Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this conspiracy from Raven and plans to lock the single door through which the enemy can enter his kingdom.

door

But, to lock the door he needs a key that is an anagram of a certain palindrome string.

The king has a string composed of lowercase English letters. Help him figure out whether any anagram of the string can be a palindrome or not.

Input Format
A single line which contains the input string.

Constraints
length of string
Each character of the string is a lowercase English letter.

Output Format
A single line which contains YES or NO in uppercase.

Sample Input : 01

aaabbbb

Sample Output : 01

YES

Explanation
A palindrome permutation of the given string is bbaaabb.

Sample Input : 02

cdefghmnopqrstuvw

Sample Output : 02

NO

Explanation
You can verify that the given string has no palindrome permutation.

Sample Input : 03

cdcdcdcdeeeef

Sample Output : 03

YES

Explanation
A palindrome permutation of the given string is ddcceefeeccdd.


*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <ctype.h>
using namespace std;


int main() {
    string s1;
    cin>>s1;
    
    int ar1[26]={0};   // arrays to keep count of characters
    
    
    //each character count
    for(int i=0;i<s1.size();i++){
        ar1[int(s1[i])-97]++;
    }
    
   
    
    // we track even and odd occurences of the character
    int even=0,odd=0;
    for(int i=0;i<26;i++){
        if(ar1[i]%2==0)
            even++;
        
        if(ar1[i]%2==1)
            odd++;
        
    }
    
    
    // palindrome when string length is even and odd occurences is 0
    if(s1.size()%2==0 && odd==0)
        cout<<"YES";
    
     // palindrome when string length is odd and odd occurences is 1
        
   else  if(s1.size()%2==1 && odd==1)
        cout<<"YES";
    
    else cout<<"NO";
   
    return 0;
}
