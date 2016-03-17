char *leet(char *d)
{
  int n=0;

  while (*d) {
    if (*d == 'a' || *d == 'A') {
      *d = '4';
    }
    if (*d == 'e' || *d == 'E') {
      *d = '3';
    }
    if (*d == 'o' || *d == 'O') {
      *d = '0';
    }
    if (*d == 't' || *d == 'T') {
      *d = '7';
    }
    if (*d == 'l' || *d == 'L') {
      *d = '1';
    }
    d++;
    n++;
  }
  *d = '\0';
  return &(d[-n]);
}
