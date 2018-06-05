#include <iostream>
using namespace std;
int main(int argc, char **argv, char z)
{
	double arg1, arg2, res;
	char *error;
	arg1 = strtod(argv[1], &error);
	if (*error != '\0')
	{
		cout << "It's not number, please enter number" << endl;
		exit(1);
	}
	arg2 = strtod(argv[3], &error);
	if (*error != '\0')
	{
		cout << "It's not number, please enter number" << endl;
		exit(1);
	}
	z = *argv[2];
	switch (argv[2][0])
	{
	case +:
			res = arg1 + arg2;
break;
	case -:
		res = arg1 - arg2;
break;
	case /:
			if (arg2 == 0.0)
			{
				cout << "Devidion by 0.\n";
				exit(0);
			}
			else
			{
				res = arg1 / arg2;
				break;
			}
	case *:
			res = arg1 * arg2;
		break;
	default:
		cout << "Wrong operator .\n";
			exit(2);
	}
	cout << "Answer is " << res << endl;
	return 0;
}