#include <iostream>
#include <string>

using namespace std;

void usage()
{
  cout << endl;
  cout << "calc arg1 op arg2" << endl;
  cout << "arg1 and arg2 are the arguments" << endl;
  cout << "op is an operator, one of + - / or *" << endl;
}

int main(int argc, char const *argv[])
{
  if (argc != 4)
  {
    usage();
    return 1;
  }

  string opArg = argv[2];
  if (opArg.length() > 1)
  {
    cout << endl
         << "operator should be a single character" << endl;
    usage();
    return 1;
  }

  char op = opArg[0];
  if (op == ',' || op == '.' || op < '+' || op > '/')
  {
    cout << endl
         << "operator not recognized" << endl;
    usage();
    return 1;
  }

  double arg1 = atof(argv[1]);
  double arg2 = atof(argv[3]);
  double result = 0;

  switch (op)
  {
  case '+':
    result = arg1 + arg2;
    break;
  case '-':
    result = arg1 - arg2;
    break;
  case '*':
    result = arg1 * arg2;
    break;
  case '/':
    if (arg2 == 0)
    {
      cout << endl
           << "cannot divide by zero" << endl;
      return 1;
    }
    result = arg1 / arg2;
    break;
  default:
    break;
  }

  cout << endl;
  cout << arg1 << " " << op << " " << arg2;
  cout << " = " << result << endl;

  cout << argv[0];

  return 0;
}
