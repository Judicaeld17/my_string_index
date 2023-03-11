// Description
// Create a my_string_index function which takes 2 parameters (haystack and needle) and locates the first occurrence of the character needle in the string haystack and returns the position.

// You can think of this function as: is there an L (character) in my string "helLo"?

// The objective is to build a loop that has an if statement which returns the characters position when it matches the right character.
// #include<stdio.h>
int my_string_index(char* str, char ch){
    char* temp=str;
    int index=0;
    while(*temp !='\0'){
      if(*temp == ch ){
          return index;
      }
      temp++;
      index++;
    }
    return -1;
}

// int main(){
//     char s[6]="toto";
//     char c ='o';
//     printf("%d",my_string_index(s,c));

//     return 0;
// }