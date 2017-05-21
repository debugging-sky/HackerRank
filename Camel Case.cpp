/*
https://www.hackerrank.com/challenges/camelcase

Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:

    It is a concatenation of one or more words consisting of English letters.
    All letters in the first word are lowercase.
    For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.

Given , print the number of words in on a new line.

Input Format

A single line containing string .

Constraints

Output Format

Print the number of words in string .

Sample Input

saveChangesInTheEditor

Sample Output

5

Explanation

String contains five words:

    

Thus, we print on a new line.


*/


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    int i=0;
    int count=1;  // to keep track of num of words initialized 1 
                  // as the first word is all in small and we can't detect the first word
    while(s[i]){
        if((int)s[i]>=65 && (int)s[i]<=90)      // if we see any Capital letter whose range is b/w 65 to 90 we                                             
                                                //    increment num of words i.e count++
            count++;
        i++;
    }
              
    cout<<count;
    return 0;
}
