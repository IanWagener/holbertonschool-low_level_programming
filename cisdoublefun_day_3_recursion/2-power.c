int power(int x, int y)
{
  int p;
  
  if (y < 0) {
    return(-1);
  }
  if (y==0) {
    return(1);
  }
  if (y > 0) {
    p=(x*x);
  }
  if (x == 0) {
    return(0);
  }
  return(p);
}
