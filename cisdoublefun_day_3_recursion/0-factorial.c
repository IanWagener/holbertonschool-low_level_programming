int factorial(int n)
{
  int c=1;
  int fact=1;

  while (c <= n) {
    fact = fact * c;
    c++;
  }
  if (n==0 || n==1) {
    return(1);
  }
  if (n < 0) {
    return(-1);
  }
  return(fact);
}
