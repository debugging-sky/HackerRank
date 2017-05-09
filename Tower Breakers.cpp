Tower Breakers 

Two players (numbered  and ) are playing a game of Tower Breakers! The rules of the game are as follows:

Player  always moves first, and both players always play optimally.
Initially there are  towers, where each tower is of height .
The players move in alternating turns. In each turn, a player can choose a tower of height  and reduce its height to , where  and  evenly divides .
If the current player is unable to make any move, they lose the game.
Given the values of  and , can you determine who will win? If the first player wins, print ; otherwise, print .

Input Format

The first line contains a single integer, , denoting the number of test cases. 
Each of the  subsequent lines describes a test case in the form of  space-separated integers describing the respective values for  and .

Constraints

Output Format

For each test case, print a single integer (i.e., either  or ) denoting the winner on a new line.

Sample Input

2
2 2
1 4
Sample Output

2
1
Explanation

We'll refer to player  as  and player  as 

In the first test case,  chooses one of the two towers and reduces it to . Then  reduces the remaining tower to a height of . As both towers now have height ,  cannot make a move so  is the winner and we print  on a new line.

In the second test case, there is only one tower of height .  can reduce it to a height of either  or , but chooses  as both players always choose optimally. Because  has no possible move,  wins and we print  on a new line.


https://www.hackerrank.com/challenges/tower-breakers-1








#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int tc;
   cin>>tc;
  
   while(tc--){
       int num_of_towers,height;
       cin>>num_of_towers>>height;
       
       if(num_of_towers%2==1 && height!=1)             // p1 will win when there is odd number of towers and height of tower is                                                                     not 1
           cout<<"1"<<endl;
       
       else cout<<"2"<<endl;
       
       
       
   }
    return 0;
}
