/******************************************************************************
 * Assignment:  Homework 6
 * Description: gets an array of size 20 from user, then calculates the sum of 
 *							 multiplication of the value at index A 
 *							 (we will call this value B), and the value at index B
 *              (except when B is out of the range), where a is zero through 
 *              size (20). after calculated, displays the result to user.
 * Programmers: Hee Jun Shin shin299@purdue.edu
 ******************************************************************************/

// parts that is still needed to be made: 
//while loop function to find the next value that contains target
//if clause funcion to determine if target is longer than the data value
//etc
#include<stdio.h>
long long inputData();
long long inputTarget();
int findValue(long long data, long long target);

int main()
{
  long long data;
  long long target;

  data = inputData();
  target = inputTarget();
  printf("%d\n", findValue(data, target));
  return 0;
}
/******************************************************************************
 * Function:    getInput
 * Description: accepts an array as input and get the 20 values from the user
 *							 and pass the 20 values into the array by adress
 * Parameters:  list[], int, array with size 20
 * Return:      n/a
 ******************************************************************************/
long long inputData()
{
  long long data;
  printf("Enter data to search -> ");
  scanf("%lld", &data);
  return data;
}

/******************************************************************************
 * Function:    getInput
 * Description: accepts an array as input and get the 20 values from the user
 *							 and pass the 20 values into the array by adress
 * Parameters:  list[], int, array with size 20
 * Return:      n/a
 ******************************************************************************/
long long inputTarget()
{
  long long target;
  printf("Enter target to locate -> ");
  scanf("%lld", &target);
  return target;
}

/******************************************************************************
 * Function:    findValue
 * Description: gets data and target as input then returns 1 if target is in
 *              the data and returns 0 if target is not in data.
 * Parameters:  data, long long, data inputet
 		target, long long, target value
 * Return:      int, 1 if target is in, 0 if not
 ******************************************************************************/
int findValue(long long data, long long target)
{
  int a;
  int b;
  int f1; //flag indicator of inner loop
  int f2; //flag indicator of outer loop

  f2 = 1;
  do
  {
    a = target % 10;
    target /= 10;
    printf("outer loop, a: %d f2: %d\n", a,f2);
    do
    {
      f1 = 0;
      b = data % 10;
      data /= 10;
      if (a == b)
        f1 = 1;
      printf("inner loop, a: %d b: %d f1: %d\n", a,b,f1);
    }while(!f1 && data);
    if (f1 == 0)
      f2 = 0;
  }while(f2 && target);
  return f2;
}
