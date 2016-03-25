int str_length(char *str, int count)
{
  if (*(str+count) == 0) return count;
  return str_length(str, count+1);
}

int check_palindrome(char *s, int count, int length)
{
  if (count >= length) return 1;
  if (s[count] != s[(length-count)-1]) return 0;
  return check_palindrome(s, count+1, length);
}

int is_palindrome(char *s)
{
  int length = str_length(s, 0);
  return check_palindrome(s, 0, length);
}
