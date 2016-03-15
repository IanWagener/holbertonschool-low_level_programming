int print_char(char c);

void print_diagonal(int n)
{
  int ncopy;
  int height;
  
  if (n <= 0) {
    print_char('\n');
  }

  for (height=1; height <=n; height++) {
    for (ncopy=1; ncopy <= n; ncopy++) {
      if (ncopy == height) {
	print_char('\\');
      }
      if (ncopy < height) {
	print_char(' ');
      }   
    }
    print_char('\n');
  }
}

