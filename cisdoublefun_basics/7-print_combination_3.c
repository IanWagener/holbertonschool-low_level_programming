int print_char(char c);

void print_combination_3(void)
{
  int i1, i2, i3;

  for (i1 = '0'; i1 <= '8'; i1++) {
    for (i2 = '1'; i2 <= '9'; i2++) {
      for (i3 = '1'; i3 <= '9'; i3++) {
	if (i1 != i2 && i1 != i3 && i2 != i3) {
	  if (i3 > i2) {
	    if (i2 > i1) {
	      print_char(i1);
	      print_char(i2);
	      print_char(i3);
	      if (i1 < '7' && i2 <= '8' && i3 <= '9'){
		print_char(',');
		print_char(' ');
	      }
	    }
	  }
	}
      }
    }
  }
}
