#include <stdio.h>
struct Box {
    double length;
    double width;
    double height;
};
void calculateVolumeAndSurfaceArea(const struct Box* box, double* volume, double* surfaceArea) {
    *volume = box->length * box->width * box->height;
    *surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}
int main() {
    struct Box box;
    box.length = 5.0;
    box.width = 3.0;
    box.height = 2.0;
    double volume, surfaceArea;
    calculateVolumeAndSurfaceArea(&box, &volume, &surfaceArea);
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    return 0;
}
