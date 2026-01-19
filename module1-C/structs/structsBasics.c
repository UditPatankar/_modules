#include <stdio.h>

// declaring a struct 
struct car {
    char *name;
    float price;
    int speed;
};

void set_speed(struct car *c, int new_speed) {
    c->speed = new_speed; // arrow operator: same as (*c).speed

    // If you have a struct, use dot (.).
    // If you have a pointer to a struct, use arrow (->).
}

int main() {
    
    // declaring variables of type "struct car"
    struct car tata;

    // initialization
    tata.name = "tata SL/9";
    tata.price = 8999.6;
    tata.speed = 225;

    // decalration  initialization in sequence
    struct car toyota = {"fortuner s3", 25999.86, 250};
    
    // w/o sequence
    struct car skoda = {.name = "salva z6", .speed = 180, .price = 18999.33};

    // tata = skoda; // copying the struct

    printf("Name: %s\n", tata.name);
    printf("Price: %.2f\n", tata.price);
    printf("Speed: %d\n\n", tata.speed);

    printf("Name: %s\n", toyota.name);
    printf("Price: %.2f\n", toyota.price);
    printf("Speed: %d\n\n", toyota.speed);

    printf("Name: %s\n", skoda.name);
    printf("Price: %.2f\n", skoda.price);
    printf("Speed: %d\n", skoda.speed);

    // passing struct to function
    set_speed(&skoda, 220);

    printf("\n%s's new speed: %d\n\n", skoda.name, skoda.speed);
    
    return 0;
}