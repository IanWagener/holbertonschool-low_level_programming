int print_char(char c);

void print_string(char *str)
{ 
  while(*str) {
    print_char(*str);
    str++;
  }
}
