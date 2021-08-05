#include <stdlib.h>
#include <stdio.h>

// Recursive strcmp
int strcmp_rec(const char *s1, const char *s2);

int main(int argc, char *argv[]){

	int res = strcmp_rec("o", "a");
	printf("%d\n", res);
	
	return 0;
}

int strcmp_rec(const char *s1, const char *s2) {
    unsigned char c1 = *s1, c2 = *s2;

    if (c1 < c2)
        return -1;
    if (c1 > c2)
        return 1;
    if (c1 == '\0')
        return 0;

    return strcmp_rec(s1 + 1, s2 + 1);
}