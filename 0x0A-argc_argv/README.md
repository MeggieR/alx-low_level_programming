0x0A. C - argc, argv

In C, argc (argument count) and argv (argument vector) are parameters commonly used in the main function to handle command-line arguments when a program is executed from the command line.
Purpose:

Handling Command-Line Arguments: The primary purpose of argc and argv is to allow a C program to receive input from the command line. This enables users to customize the behavior of the program by passing arguments when invoking it.

Parameter Parsing: Programs can use the information provided by argc and argv to parse and process command-line arguments. This is useful for changing program behavior, setting options, or providing input data.

Configuration: Command-line arguments are often used to specify configuration parameters or input files for the program.

Error Handling: argc is commonly used to check if the correct number of arguments has been provided, and argv is used to access and process these arguments. This allows the program to print error messages or usage information when incorrect input is provided.
Practice questions
0.Write a program that prints its name, followed by a new line.

If you rename the program, it will print the new name, without having to compile it again
You should not remove the path before the name of the program
1.Write a program that prints the number of arguments passed into it.

Your program should print a number, followed by a new line
2. Write a program that prints all arguments it receives.

All arguments should be printed, including the first one
Only print one argument per line, ending with a new line
3.Write a program that multiplies two numbers.

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
4.Write a program that adds positive numbers.

Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored in an int
5.Write a program that prints the minimum number of coins to make change for an amount of money.

Usage: ./change cents
where cents is the amount of cents you need to give back
if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
you should use atoi to parse the parameter passed to your program
If the number passed as the argument is negative, print 0, followed by a new line
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
