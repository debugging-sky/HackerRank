/*
  https://www.hackerrank.com/challenges/maximum-element

  You have an empty sequence, and you will be given  queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.
Input Format

The first line of input contains an integer, . The next  lines each contain an above mentioned query. (It is guaranteed that each query is valid.)

Constraints 
 1<=N<=10^55
 1<=X<=10^9
 1<=Type<=3

Output Format

For each type  query, print the maximum element in the stack on a new line.

Sample Input

10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3
Sample Output

26
91
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack <int> s;
    int input;                                                      //no of times the inputs will betaken;
    
    cin>>input;
    
    int type,value;
   
    
    while(input){                                              // loop will iterate input number of times
        cin>>type;
        if(type==1)                                          //  if type is 1  
           { 
              cin>>value;                                    // input value to be pushed if empty
              
              if(s.empty())
                s.push(value);
              
             else s.push(max(value,s.top()));             // else push max of top and current input value so that we can pop out                                                                max element every time
           }
        
        if(type==2)                                //  pop out element
           s.pop();
        
    
    
    if (type==3){                             // print max element that is the top element
        cout<<s.top()<<endl;
    }
        input--;
    }
    
    
    
    return 0;
}
