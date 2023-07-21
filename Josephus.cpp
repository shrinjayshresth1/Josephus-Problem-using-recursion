/*
Suppose there are n people (numbered from 1 to n) standing in a circle. Starting from person 1, you begin counting k people clockwise and then remove the kth person from the circle. The counting continues from the next person, and the process repeats until only one person remains.

The goal of the Josephus problem is to determine the position of the last remaining person in the circle.
*/
#include <iostream>
using namespace std;
int josephus(int n, int k) {
    // Base case: If there's only one person left, return their position (1-based index).
    if (n == 1) {
        return 1;
    }

    // Recursive case: Find the position of the last person in the (n-1) sized circle.
    int position = (josephus(n - 1, k) + k - 1) % n + 1;

    return position;
}

int main()
{
  cout<<josephus(5,5);
}