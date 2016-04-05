int first_digit(int n)
{
   /*declaring variables*/
  int ncopy=n;

  if (0 < ncopy) {
    ncopy=ncopy*-1;
  }
  while (ncopy < -9) {
     ncopy=ncopy/10;
   }
   ncopy=-ncopy;
   return(ncopy);
}
