void reverse_string(char *s)
{
  int c;
  int length = 0;
  char *begin, *end, temp;
  
  begin  = s;
  end    = s;

  while (*s > 0) {
    s++;
    length++;
  }
  
  for (c = 0; c < length - 1; c++)
    end++;
  
  for (c = 0; c < length/2; c++)
    {
      temp   = *end;
      *end   = *begin;
      *begin = temp;
      
      begin++;
      end--;
    }
}
