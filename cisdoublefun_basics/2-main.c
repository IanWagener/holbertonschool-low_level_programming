int print_char(char c);

int main(void)
{
  int a[5] = { 0, 1, 2, 4, 1 };
  int b[5] = { 1, 6, 2, 2, 8 };
  int i;

  i = 4;
  while (a[i] >= 0) 
    {
      int c[5];
      c[i]=a[i]+b[i];
      print_char(c[i]+'0'); 
      i--;      
    }
  print_char('\n');
  return (0);
}
