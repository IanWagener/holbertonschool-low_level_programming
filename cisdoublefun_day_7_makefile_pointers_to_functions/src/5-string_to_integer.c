int length(char *s);
int expo(int length);
int neg(char *s);

int string_to_integer(char *s)
{
  int i;
  int num=1;
  int l;
  int e;
  int n;
  int tmp = 0;
 
  l = length(s);
  if(l > 10)
    {
      return 0;
    }
  e = expo(l);
  for (i = 0 ; s[i]; i++)
    {
      num = (s[i] - 48);
      if (num >= 0 && num <= 9)
	{
	  num = num * e;
	  e = e/10 ;
	  if (tmp == 2147483640 && num > 7 && neg(s) != -1)
	    {
	      return 0 ;
	    }
	  num += tmp;
	  tmp = num;
	  if (s[i +1] == ' ')
            {
	      n = neg(s);
	      num *= n;
              break;
	    }
	}
    }
  n = neg(s);
  num *= n;
  return num;
}

int neg(char *s)
{
  int i;
  int negative  = 1;
  for ( i = 0 ; s[i]; i++)
    {
      if (s[i] == '-')
        {
	  negative *= -1;
        }

    }
  return negative;
}

int expo(int length)
{
  int expo = 1;
  while (length > 1)
    {
      expo = expo * 10;
      length--;
    }
  return expo;
}

int length(char *s)
{
  int l  = 0;
  int num;
  int i;
  for ( i = 0 ; s[i] ; i++)
    {
      num = (s[i] - 48);

      if (num >= 0 && num <= 9)
        {
	  l++;
	  if (s[i +1] == ' ')
	    {
	      break;
	    }
        }
    }
  return l;
}
