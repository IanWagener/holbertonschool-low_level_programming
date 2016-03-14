#include "my_functions.h"

void print_tebahpla(void)
{
  char last_letter_of_alphabet;

  for (last_letter_of_alphabet='z'; last_letter_of_alphabet >= 'a' ; last_letter_of_alphabet--)
    {
      print_char(last_letter_of_alphabet);
    }
}
