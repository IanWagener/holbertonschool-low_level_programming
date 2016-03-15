int print_char(char c);

void print_line(int n)
{
  int ncopy;

  for (ncopy = 1; ncopy <= n; ncopy++) {
    print_char('_');
  }
  print_char('\n');
}
