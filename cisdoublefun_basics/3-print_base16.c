int print_char(char c);

void print_base16(void)
{
  int n;
  char a;

  for(n=0; n <= 9; n++) {
    print_char(n + '0');
  }
  for(a='A'; a <= 'F'; a++) {
    print_char(a);
  }
}
