int print_char(char c);

int str_len(char *s)
{
  int length=0;

  while(s[length]) {
    length++;
  }
  return(length);
}
