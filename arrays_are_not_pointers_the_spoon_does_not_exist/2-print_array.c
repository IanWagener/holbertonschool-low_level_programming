int print_char(char c);
void print_number(int n);

void print_array(int *a, int n)
{
  int i;

  for (i = 0; i < n; i++) {
    print_number(*a);
    a++;
    if (i < n - 1) {
      print_char(',');
      print_char(' ');
    }
  }
  print_char('\n');
}
void print_number(int n)
{ 
  /*declaring variables*/
  int ncopy=n;
  int power=1;
  int charint;
  /*what to do if 0 > ncopy*/
  if (0 > ncopy) {
    ncopy=ncopy*-1;
    print_char('-'); }
  /*finding the number of digits*/  
  for (; ncopy > 0;) {
    ncopy=ncopy/10;
    power=power*10; }
  power=power/10; 
  /*reinitializing the value of n*/
  if (0 > n) {
    n=n*-1; }
  /*printing out the numbers*/
  for (ncopy=n; ncopy > 0;) {
    charint=ncopy/power;
    ncopy=ncopy%power;
    power=power/10;
    print_char(charint + '0'); }
  /*what to if ncopy==0*/
  if (n == 0) {
    print_char('0');
  }
}
