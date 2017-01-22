#include <stdio.h>
#include <string.h>

int main() {
    /* read only string */
    char * roname = "John Smith";
    char name[] = "John Smiths";
    /* which is the same as 
    char name[11] = "John Smith" */
    int age = 28;

    /* length */
    printf("%s is %d years old.\n", roname, age);
    printf("%s ie length - %d\n", name, strlen(name));
    
    /* string cmp */
    if (strncmp(name, "John", 4) == 0) {
        printf("Hello John!!\n");
    } else {
        printf("You are not John, Go Away.\n");
    }

    /* concat */
    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);
    printf("%s\n", dest);
    strncat(dest,src,20);
    printf("%s\n",dest);
    return 0;
}
