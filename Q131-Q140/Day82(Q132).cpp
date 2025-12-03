// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

int main() {
    // Define an enum for traffic lights
    enum TrafficLight { RED, YELLOW, GREEN };

    enum TrafficLight signal;
    
    // Take user input as 0,1,2
    printf("Enter traffic signal (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &signal);

    // Print action based on enum value
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid signal\n");
    }

    return 0;
}
