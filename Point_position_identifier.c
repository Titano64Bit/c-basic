/*reads coordinates (x,y) and determines wheter the point is on the origin
on the axis or in one of the four quadrants*/
#include <stdio.h>

int main ()
{
    float x,y;
    printf("Enter coordinates of the point\n x:");
    scanf("%f",&x);
    printf("y:");
    scanf("%f",&y);

    if (x == 0 && y == 0)
        printf("the point is on the origin");
        else if (x == 0 && y!=0) {
            printf("the point is on the x axis\n");
        } else if (y == 0 && x!=0) {
            printf("the point is on the y axis\n");
        }
        else if (x > 0 && y > 0) {
            printf("the point is on the I quadrant");
        } else if (x < 0 && y > 0) {
            printf("the point is on the II quadrant");
        } else if (x < 0 && y < 0) {
            printf("the point is on the III quadrant");
        } else if (x > 0 && y < 0)
            printf("the point is on the IV quadrant");

    return 0;
}