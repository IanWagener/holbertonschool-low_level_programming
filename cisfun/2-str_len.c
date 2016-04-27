int str_len(char *s)
{
  int length=0;

  while(s[length]!='\0') {
    length++;
  }
  return(length);
}
