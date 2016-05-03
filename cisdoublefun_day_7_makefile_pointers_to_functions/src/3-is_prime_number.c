int is_prime_number(int n);

int my_function(int n,int x)
{
  if (n <= 1) {
    return (0);
  }
  if (x > n/2) {
    return(1);
  }
  if (n % x == 0){
    return (0);
  }
  return my_function(n, x + 1);
}
int is_prime_number(int n)
{
  return my_function(n, 2);
}
