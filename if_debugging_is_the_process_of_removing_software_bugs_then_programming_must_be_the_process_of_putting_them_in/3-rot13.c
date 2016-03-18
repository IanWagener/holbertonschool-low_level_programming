char *rot13(char *c)
{
  int l=0;

  while (*c) {
    if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M')) {
      *c = *c + 13;
    }
    else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z')) {
      *c = *c - 13;
    }
    c++;
    l++;
  }
  return&(c[-l]);
}
