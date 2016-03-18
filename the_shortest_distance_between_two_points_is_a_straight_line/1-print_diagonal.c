int print_char(char c);
/*start of function*/
void print_diagonal(int n)
{
  /*declaring variables*/
  int ncopy;
  int height;

  /*printing new line if n is 0 or less*/
  if (n <= 0) {
    print_char('\n');
  }
  /*finding height and printing line*/
  for (height=1; height <=n; height++) {
    for (ncopy=1; ncopy <= n; ncopy++) {
      if (ncopy == height) {
	print_char('\\');
      }
      /*printing space before the "\"*/
      if (ncopy < height) {
	print_char(' ');
      }   
    }
    /*printing new line*/
    print_char('\n');
  }
}

