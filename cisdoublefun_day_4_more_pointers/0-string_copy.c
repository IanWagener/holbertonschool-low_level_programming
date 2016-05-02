char *string_copy(char *dest, const char *src)
{
  int count = 0;
  while (*src) {
    *dest = *src;
    dest++;
    src++;
    count++;
  }
  *dest = '\0';
  return &(dest[-count]);
}
