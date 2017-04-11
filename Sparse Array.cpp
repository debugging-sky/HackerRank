/*

https://www.hackerrank.com/challenges/sparse-arrays

There are  strings. Each string's length is no more than  characters. There are also  queries. For each query, you are given a string, and you need to find out how many times this string occurred previously.

Input Format

The first line contains , the number of strings.
The next  lines each contain a string.
The nd line contains , the number of queries.
The following  lines each contain a query string.



Sample Input

4
aba
baba
aba
xzxb
3
aba
xzxb
ab
Sample Output

2
1
0
Explanation

Here, "aba" occurs twice, in the first and third string. The string "xzxb" occurs once in the fourth string, and "ab" does not occur at all.

Submissions: 42713
Max Score: 25
Difficulty: Medium
Rate This Challenge:
    
More
Current Buffer (saved locally, editable)     


*/




#include <iostream>
#include <iterator>
#include <unordered_set>
using namespace std;

int main() {
    int n, q, i;
    string str;
    unordered_multiset<string> s;                 // unordered set used standard template library in c++
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> str;
        s.insert(str);
    }
    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> str;
        cout << s.count(str) << '\n';
    }
}