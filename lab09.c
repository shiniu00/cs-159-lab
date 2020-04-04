/******************************************************************************
 * Assignment:  Homework 6
 * Description: gets an array of size 20 from user, then calculates the sum of 
 *							 multiplication of the value at index A 
 *							 (we will call this value B), and the value at index B
 *              (except when B is out of the range), where a is zero through 
 *              size (20). after calculated, displays the result to user.
 * Programmers: Hee Jun Shin shin299@purdue.edu
 ******************************************************************************/
 #include<stdio.h>
 
 int main()
 {
	 long long data;
	 long long target;
	 
	 data = inputData();
	 target = inputTarget();
	 return 0;
 }
 long long inputData()
 {
	 long long data;
	 printf("Enter data to search -> ");
	 scanf("%lld", &data);
	 return data;
 }
 long long inputTarget()
 {
	 long long target;
	 printf("Enter target to locate -> ");
	 scanf("%lld", &target);
	 return target;
 }
 
long long findValue(int data, int target)
{
	int i; // index variable
	int a;
	int f = 0; //flag indicator
	
	a = target % 10;
	do
	{
		a = 
		do
		{
			b = data % 10;
			data /= 10;
			if a == b
				f = 1;
		}while(f == 0 && data)
