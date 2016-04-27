#include<stdio.h> 

int main()
{ 
  int width, height, num;

  printf("Please enter a number to print the hollow star formation \n"); 
  scanf("%d", &num); 

  for( height=0; height<num; height++ ) {
    for( width=0; width<num; width++ ) {
      if( height==0 || height==num-1 ) {
        printf("o");
      }  
    else if( width==0 || width==num-1 ) {
	printf("|");
      } 
      else {
	printf(" ");
      }  
    }
    printf("\n");
  }
  return(0);
}
