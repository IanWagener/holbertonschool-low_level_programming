char *rev_string(char *str)
{
  int length=0;
  int i=0;
  int tmp;

  while (str[length])
    {
      length ++;
    }
  length --;
  while (length > i)
    {
      tmp = str[i];
      str[i] = str[length];
      str[length] = tmp;
      i ++;
      length --;
    }
  return str;
}
