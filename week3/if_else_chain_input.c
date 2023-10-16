#include <stdio.h>

int main() {

    int mark;

    printf ("Enter the mark: \n");
    scanf ("%d", &mark);

    if (mark == 0)
    {
        printf ("The mark of %d is zero\n", mark);
    }
    else if (mark < 40 && mark > 0)
    {
        printf ("The mark of %d is a fail\n", mark);
    }
    else if (mark < 50 && mark >= 40) 
    {
        printf ("The mark of %d is a pass\n", mark);
    }
    else if (mark < 60 && mark >= 50)
    {
        printf ("The mark of %d is a 2:2\n", mark);
    }
    else if (mark < 70 && mark >= 60)
    {
        printf ("The mark of %d is a 2:1\n", mark);
    }
    else if (mark <= 100 && mark >= 70)
    {
        printf ("The mark of %d is a first\n", mark);
    }
    else{
        printf("invalid mark");
    }
    return 0;
}