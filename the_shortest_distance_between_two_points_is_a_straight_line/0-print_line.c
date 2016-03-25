int print_char(char c);
/*start of function*/
void print_line(int n)
{
  /*declaring variables*/
  int ncopy;

  /*printing the line*/
  for (ncopy = 1; ncopy <= n; ncopy++) {
    print_char('_');
  }
  /*printing new line*/
  print_char('\n');
}
