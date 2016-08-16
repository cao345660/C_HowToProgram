task_317
Drivers are concerned with the 
mileage obtained by their automobiles. One
driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for
ach tankful. Develop a program that will input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained for each tankful. After pro-
cessing all input information, the program should calculate and print the combined miles per gallon
obtained for all tankfuls.

task_318
evelop a C program that will dete
rmine if a 
department store
customer has exceeded th
e credit limit on a charge account. For each customer, the following facts
are available:
a)   Account number
b)   Balance at the beginning of the month
c)   Total of all items charged by this customer this month
d)   Total of all credits applied to
 this customer's account this month
e)   Allowed credit limit
The program should input each fact, calculate the new balance (= beginning balance +charges Ц credits),
and determine whether the new balance exceeds the customer's credit limit. For those customers whose credit
limit is exceeded, the program should display the customer's account number, credit limit, new balance and 
the message УCredit limit exceeded.Ф

task_319
One large chemical company pays its salespeople on a com-
mission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For
example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of
$5000, or a total of $650. Develop a program that will input each salespersonТs gross sales for last
week and will calculate and display that salespersonТs earnings. Process one salesperson's figures at a
time.

task_320
 The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and therefore includes the
division by 365 (days). Develop a program that will input principal, rate and days for several
loans, and will calculate and display the simple interest for each loan, using the preceding formula.

task_321
Develop a program that will determine the gross pay for each of several
employees. The company pays Уstraight timeФ for th
e first 40 hours worked by each employee and
pays Уtime-and-a-halfФ for all hours worked in excess of 40 hours. YouТre given a list of the employ-
ees of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee and should deter-
mine and display the employee's gross pay.

task_322
Write a program that demonstrates the difference between predecrementing and postdecrementing
using the decrement operator --.

task_323
Write a program that utilizes looping to print the numbers from 1 to 10 side by side on the same 
line with three spaces between numbers.

task_324
The process of finding the largest number (i.e., the maximum of a group of numbers) is used 
frequently in computer applications. For example, a program that
determines the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. 
Write a pseudocode program and then a program that inputs a series of 10 non-negative numbers and determines 
and prints the largest of the numbers. 
Hint: Your program should use three variables as follows:
counter: A counter to count to 10 (i.e., to keep track of how many numbers have
been input and to determine when all 10 numbers have been processed)
number: The current number input to the program
largest: The largest number found so far

task_325
Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.
N       10*N    100*N   1000*N 
1       10      100     1000
2       20      200     2000
3       30      300     3000
4       40      400     4000
5       50      500     5000
6       60      600     6000
7       70      700     7000
8       80      800     8000
9       90      900     9000
10      100     1000    10000

task_326
Write a program that utilizes looping to produce the following table of values:
A       A+2     A+4     A+6
3       5       7       9
6       8       10      12
9       11      13      15
12      14      16      18
15      17      19      21

task_327
sing an approach similar to Exercise 3.23, find the two largest values of the 10 numbers.
[Note: You may input each number only once.]

task_328
Modify the program in Figure 3.10 to validate its inputs. On any input, if the value entered is other than 1 or 
2, keep looping until the user enters a correct value.
#include <stdio.h>

int main(void)
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned student = 1;
	int result;

	while(student <= 10)
	{
		printf("Enter result(1=pass,2=fail): ");
		scanf("%d", &result);

		if(result == 1)
		{
			passes = passes + 1;
		}
		else()
		{
			failures = failures + 1;
		}

		student = student + 1;
	}
	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	if(passes > 8)
	{
		puts("Bonus to instructor");
	}

	return 0;
}

task_333
Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print
****
****
****
****

task_334
Modify the program you wrote in Exercise 3.32 so that it
prints a hollow square. For example, if your program reads a size of 5, it should print
*****
*   *
*   *
*   *
***** 

task_335
A palindrome is a number or a text phrase that reads the same back-
ward as forward. For example, each of the following five-digit integers is a palindrome: 12321,
55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether
or not itТs a palindrome. [Hint: Use the division and remainder operators to separate the number
into its individual digits.]

task_336
Input an integer (5 digits or fewer) containing only 0s and 1s (i.e., a УbinaryФ integer) and print its decimal equivalent. [
Hint: Use the remainder and division operators to pick off the УbinaryФ numberТs digits one at a time from right
to left. Just as in the decimal number system, in which the rightmost digit has a positional value of
1, and the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary
number system the rightmost digit has a positional value of 1, the next digit left has a positional
value of 2, then 4, then 8, and so on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3
* 10 +  2 * 100. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4
+ 8 or 13.]

task_337
How can you determine how fast your own computer really operates? Write a program with a 
while loop that counts from 1 to 3.000.000 by 1s. Every time
the count reaches a multiple of 1.000.000, print that number on the screen. Use your watch to
time how long each 100 million repetitions of the loop takes.

task_338
Write a program that prints 100 asterisks, one at a time. After every tenth asterisk, your 
program should print a newline character. [Hint: Count from 1 to 100.Use the remainder operator to recognize each
 time the counter reaches a multiple of 10.]

task_339
Write a program that reads an integer (5 digits or fewer) and determines and
prints how many digits in the integer are 7s.

task_340
Write a program that displays the following checker-board pattern:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
Your program must use only three output statements, one of each of the following forms:
printf( "%s", "* " ); 
printf( "%s", " " ); 
puts( "" ); // outputs a newline

task_341
Write a program that keeps printing the multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. 
Your loop should not terminate (i.e., you should create an infinite loop). What happens when you run this program?

task_342
Write a program that reads the radius of a circle (as a float value) and computes and prints the diamete
r, the circumference and the area. Use the value 3.14159 for pi.

task_344
Write a program that reads three nonzero integer values and determines and prints whether they could represent 
the sides of a triangle.

task_345
Write a program that reads three nonzero integers and determines and prints whether they could be the sides 
of a right triangle.

task_346
//¬аша программа должна считывать четырехзначное целое число и шифровать его
//следующим образом: "«аменить каждую цифру значением (суммы этой цифры и 7) по модулю
//10. «атем помен€ть местами первую цифру и третью, вторую цифру и четвертую". «атем
//вывести зашифрованое целое число. Ќапишите отдельную программу котора€ выводит
//зашифрованное четырехзначное число и дешефрует его, воссоздава€ первоначальное число

task_347
The factorial of a nonnegative integer n is written n!(pronounced "n factorial") and is defined as follows:
n! = n * ( n - 1 ) * ( n - 2 ) * ... * 1(for values of n greater than or equals to 1)
and
n! = 1 (for n = 0).
For example, 5! = 5 * 4 * 3 * 2 * 1, which is 120.
a) Write a program that reads a nonnegative integer and computes and prints its factorial.
b) Write a program that estimates the value of the mathematical constant e by using the formula:
e = 1 + 1 / 1! + 1 / 2! + 1/ 3! +...
c) Write a program that computes the value of e^x by using the formula
e^x = 1 + x / 1! + x^2 / 2! + x^3 / 3! + ...