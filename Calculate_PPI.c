#include <stdio.h>

int main() {
    // Pixel size in millimeters (mm)
    float pixel_size_mm = 0.3114;

    // Constant: 1 inch = 25.4 mm
    float mm_per_inch = 25.4;

    // Calculate PPI
    float ppi = mm_per_inch / pixel_size_mm;

    // Output result
    printf("Pixel size: %.4f mm\n", pixel_size_mm);
    printf("Calculated PPI: %.2f\n", ppi);

    return 0;
}