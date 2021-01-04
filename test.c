
#include <stdio.h>

void go_south_east(int lat, int lon)
{
    lat = lat - 1;
    lon = lon +1;
}

int main(){
    int latitude = 32;
    int longitutde = -64;

    go_south_east(latitude, longitutde);

    printf("Avast! Now at: [%d, %d]\n", latitude, longitutde);
    

    return 0;
}
