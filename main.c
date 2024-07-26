#include <stdio.h>
#include <unistd.h>

int ft_strlen(const char *s){
    int i;

    i = 0;
    while (*(s + i))
        i++;
    return i;
}

int main(int argc , char **argv) {



    if (argc != 2)
    {
        write(1,"Error",5);
        return 1;
    }
    if(strlen((argv[1])) != 31)
    {
        write(1,"Error",5);
        return 1;
    }
}
