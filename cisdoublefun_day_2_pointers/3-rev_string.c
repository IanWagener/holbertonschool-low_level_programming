char *rev_string(char *str)
{
  int c=0;
  int length = 0;
  char *begin, *end, temp;
  
  begin = str;
  end = str;
  
  while(*str > 0) {
    str++;
    length++;
  }
  
  while(*str) {
    if(c < length - 1) {
      c++;
    }
    end++;
  }
  c=0;
  while(*str) {
    if(c < length/2) {
      c++;
      temp  = *end;
      *end  = *begin;
      *begin = temp;
      
      begin++;
      end--;
    }
  }
  return(end - begin);
}
