/******************************************************************
** Author: James Meehan
** Date: 06/02/2017
** Description: This file contains the postfixEval function.  The
** postfixEval function takes a C-style string parameter that
** represents a postfix expression.  It returns the solution as a
** double.
********************************************************************/

#include <iostream>
#include <stack>
#include <cstring>
#include <cstdlib>

using namespace std;

double postfixEval(char *string)
{
	stack<double> postfix;
	// use strtok to iterate through the string until we hit the nullptr at the end.
	char *token = std::strtok(string, " ");
	while (token != NULL)
	{
		// if current value is not an operand then convert to double and push onto the stack
		if (!(*token == '+' || *token == '-' || *token == '*' || *token == '/'))
		{
			double f = atof(token);
			postfix.push(f);
			token = std::strtok(NULL, " ");
		}

		// if current value isn't a digit it must be an operand. In that case the program
		// will work the stack to perform the proper arithmetic operation.
		else
		{
			double first;
			double second;
			first = postfix.top();
			postfix.pop();
			second = postfix.top();
			postfix.pop();

			if (*token == '+')
			{
				postfix.push(second + first);
			}
			if (*token == '-')
			{
				postfix.push(second - first);
			}
			if (*token == '*')
			{
				postfix.push(second * first);
			}
			if (*token == '/')
			{

				postfix.push(second / first);
			}
			token = std::strtok(NULL, " ");
		}
	}
	return postfix.top();

}

void printPostFix(char* input, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << input[i] << " ";
	}

	cout << endl;
}

int main()
{
char a[20] = "25 12 7 - 2 * /";
printPostFix(a, 7);
cout << "A is " << postfixEval(a) << endl;

char b[20] = "4 5 7 2 + - *";
char c[20] = "3 4 + 2 * 7 /";
char d[20] = "5 7 + 6 2 - *";
char e[20] = "4 2 3 5 1 - + * +";
char f[20] = "4 2 + 3 5 1 - * +";
printPostFix(b, 7);
cout << "B is " << postfixEval(b) << endl;

printPostFix(c, 7);
cout << "C is " << postfixEval(c) << endl;

printPostFix(d, 7);
cout << "D is " << postfixEval(d) << endl;

printPostFix(e, 9);
cout << "E is " << postfixEval(e) << endl;

printPostFix(f, 9);
cout << "F is " << postfixEval(f) << endl;

cout << endl;
return 0;
}
