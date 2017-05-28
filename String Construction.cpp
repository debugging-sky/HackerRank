
/*
https://www.hackerrank.com/challenges/string-construction



Amanda has a string, , of lowercase letters that she wants to copy into a new string, . She can perform the following operations any number of times to construct string :

    Append a character to the end of string at a cost of dollar.
    Choose any substring of and append it to the end of at no charge.

Given strings (i.e., ), find and print the minimum cost of copying each to on a new line.

Input Format

The first line contains a single integer, , denoting the number of strings.
Each line of the subsequent lines contains a single string, .

Constraints

Subtasks

    for of the maximum score.

Output Format

For each string (where ), print the minimum cost of constructing string on a new line.

Sample Input

2
abcd
abab

Sample Output

4
2

Explanation

Query 0: We start with and .

    Append character '' to at a cost of dollar, .
    Append character '' to at a cost of dollar, .
    Append character '' to at a cost of dollar, .
    Append character '' to at a cost of dollar, .

Because the total cost of all operations is dollars, we print on a new line.

Query 1: We start with and .

    Append character '' to at a cost of dollar, .
    Append character '' to at a cost of dollar, .
    Append substring to at no cost, .

Because the total cost of all operations is dollars, we print on a new line.

Note

A substring of a string is another string that occurs "in" (Wikipedia). For example, the substrings of the string "" are "", "" ,"", "", "", and "".


*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

void StringConstruction(string s){
    
    set<char> c;
     //inserting distinct characters
    for(int i=0;i<s.size();i++){
        c.insert(s[i]);
    }
    
    //result is the num of dixtinct characters
    cout<<c.size()<<endl;
    
}
int main() {
   int tc;
   cin>>tc; //test case;
    
   while(tc--){
       string s;
       cin>>s;
       
       StringConstruction(s);
   }
    
    return 0;
}
