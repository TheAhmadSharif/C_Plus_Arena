char hello[] = "hello";

char *p = hello;

while (*p)
{
    *p += 1; // increase the character by one

    p += 1; // move to the next spot
}

printf(hello);