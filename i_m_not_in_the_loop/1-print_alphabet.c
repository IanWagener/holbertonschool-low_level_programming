#include "my_functions.h"

void print_alphabet(void)
{
  char first_letter_of_alphabet;

  for (first_letter_of_alphabet='a'; first_letter_of_alphabet <= 'z' ; first_letter_of_alphabet++)
    {
      print_char(first_letter_of_alphabet);
    }
}
