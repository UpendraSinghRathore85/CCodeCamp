# include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    // Integer type 
    int age = 25; 
    printf("Age: %d and size taken by age is = %d\n", age, sizeof(age));
    

    // Float type
    float height = 5.9000044555;
    printf("Height: %.6f feet and size taken by height is = %d\n", height, sizeof(height));

    // Double type
    double distance = 12345.6789;
    printf("Distance: %.4lf meters & \n", distance);
    printf("size taken by distance is : %.d bytes \n", sizeof(distance));

    // Character type
    char initial = 'A';
    printf("Initial: %c\n", initial);

    return 0;
}
