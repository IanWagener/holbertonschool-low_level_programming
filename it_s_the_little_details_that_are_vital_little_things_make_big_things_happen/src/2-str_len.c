int str_len(char *s)
{
  int length = 0;
  
  while (*s > 0) {
    s++;
    length++;
  }
  return length;
}
