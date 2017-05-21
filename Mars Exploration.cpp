/*


https://www.hackerrank.com/challenges/mars-exploration

Sami's spaceship crashed on Mars! She sends sequential SOS messages to Earth for help.

[NASA_Mars_Rover.jpg]

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, , determine how many letters of Sami's SOS have been changed by radiation.

Input Format

There is one line of input: a single string, .

Note: As the original message is just SOS repeated times, 's length will be a multiple of .

Constraints

    will contain only uppercase English letters.

Output Format

Print the number of letters in Sami's message that were altered by cosmic radiation.

Sample Input 0

SOSSPSSQSSOR

Sample Output 0

3

Sample Input 1

SOSSOT

Sample Output 1

1

Explanation

Sample 0

= SOSSPSSQSSOR, and signal length . Sami sent SOS messages (i.e.: ).

Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR

We print the number of changed letters, which is .

Sample 1

= SOSSOT, and signal length . Sami sent SOS messages (i.e.: ).

Expected Signal: SOSSOS
Received Signal: SOSSOT

We print the number of changed letters, which is .

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
    string S;
    cin >> S;
    
    int i=0;
    string s="SOS";
    int count=0;   // to keep track of unmatched character
    while(S[i]){
        if(S[i]!=s[i%3])         // i%3 makes sure that we are iterating over "SOS" in a continuous manner
            count++;
        i++;
    }
    
    cout<<count;
    return 0;
}
