char *uppercase_string(char *i)
{
  int n=0;

  while(*i) {
    if (*i >= 97 && *i <= 122) {
      *i = *i - 32;
    }
    i++;
    n++;
  }
    return&(i[-n]);
}
