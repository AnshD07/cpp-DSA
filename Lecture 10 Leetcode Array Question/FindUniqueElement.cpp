// https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1





/*
Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once.
So, the unique number in this array is 1.
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
  Explanation: In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are present twice, and the number 4 is present only once.
So, the unique number in this array is 4.

10
Explanation: In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. Here, the numbers 1, 3, 6, and 7 are present twice, and the number 10 is present only once.
So, the unique number in this array is 10.

*/

#include <iostream>
using namespace std;
// cout << (1^3^5^1^3^5^6); ---> ans will be => 6

int uniqueElemnet(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}
int main()
{
  // int arr[7] = {1, 2, 4, 1, 2, 4, 5};

  int arr[9] = {2, 7, 8, 4, 3, 8, 2, 4, 7};
  int size = sizeof(arr) / sizeof(int);

  cout << endl
       << "In array unique number is : " << uniqueElemnet(arr, size) << endl;
}