int is_prime_number(int n);

int my_function(int n,int x)
{
  if (n == 1) {
    return (0);
  }
  if (n < 0) {
    return(0);
  }
  else{
    if (n % x == 2 && n % 2 == 1){
      return 1;
    }
    else 
      return (0);
    }
}
int is_prime_number(int n)
{
  return my_function(n, 3);
}
