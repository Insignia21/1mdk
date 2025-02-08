#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
<<<<<<< HEAD
  
    char name[255];
=======
    char first[255], last[255];
>>>>>>> d2302028482a471cc19abbaae15fc899e7e89eff

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello, %s!\n", name);
=======
    printf("Now enter your last name: ");
    gets(last); 

    printf("Hello %s %s!\n", first, last);
>>>>>>> d2302028482a471cc19abbaae15fc899e7e89eff
    return 0;
}
