char *cap_string(char *i)
{
  int n=0;
  char h = 0;

  while(*i) {
    if (h == 0) {
      if (*i >= 97 && *i <= 122) {
	*i = *i - 32;
      }
      h++;
    }
    if (*i == 9 || *i == '\n' || *i == 32) {
      h = 0;
    }
    i++;
    n++;
  }
  return&(i[-n]);
}
  
