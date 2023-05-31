#include <stdio.h>

#include <string.h>

int main ()

{

char id[50];

User:

printf("Enter your id:\n");

scanf("%s", &id);

if (strcmp(id,"admin")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"admin1122")==0)

{

printf("You have successly loged in into G-Mail\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}

return 0;

}
