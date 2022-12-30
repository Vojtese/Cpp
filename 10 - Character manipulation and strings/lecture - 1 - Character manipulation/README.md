# Character manipulation

## Character array construct
* **message** --> 'H' 'e' 'l' 'l' 'o' '\0' 

|C-String facilities|
|---|
|length|
|concatenate|
|copy|
|Search...|

- C-strings are not easy to work with: how big the string is in the memory, if it concatenates correctly etc.
- **std::string**

## Basic facilities
  1. Check if character is alphanumeric
  2. Check if character is alphabetic
  3. Check if a character is blank
  4. Check if character is lowercase or uppercase
  5. Check if a character is a digit
  6. Turning a character to lowercase/uppercase using the std::tolower(), std::toupper() functions

https://en.cppreference.com/w/cpp/header/cctype