int print_char(char c);

void triangles_in_the_term(int h, int n)
{
  int height, width, space, amount;

  for(amount=1; amount <= n; amount++) {
    for (height=1; height <= h ; height++) {
      for (space=h-height; space >= 0; space--) {
	print_char(' ');
      }
      for (width=1; width <= height * 2 - 1; width++) {
	print_char('*');
      }  
      print_char('\n');
    }
  }
}
    
