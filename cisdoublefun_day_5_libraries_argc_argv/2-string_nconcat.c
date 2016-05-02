char *string_nconcat(char *dest, char *src, int n)
{
  int count = 0;
  int i = 0;
  while(*dest) {
    dest++;
    count++;
  }
  while(*src) {
    if (i < n) {
      *dest = *src;
      dest++;
      count++;
    }
    i++;
    src++;
  }
  *dest='\0';
  return &(dest[-count]);
}
