char *concat_strings(char *dest, const char *src)
{
  while(*dest) {
    dest++;
  }
  while(*src) {
    *dest = *src;
    src++;
    dest++;
  }
  *dest='\0';
  return dest;
}
