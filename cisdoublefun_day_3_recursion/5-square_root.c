int square_root(int n);

int my_function(int n, int x)
{
  if (x * x > n || n < 0) {
    return(-1);
  }
  if (x * x == n) {
    return(x);
  }
  return(my_function(n, x+1));
}
int square_root(int n)
{
  return(my_function(n, 0));
}
