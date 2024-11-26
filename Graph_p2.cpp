#include "Graph_p2_lib.cpp"
#include <iostream>


int main() {
    // Create a hash table of distances
    const int max = 20;
    Distance distances[max];
    for (int i = 0; i < max; ++i) {
        distances[i].city1 = nullptr;
        distances[i].city2 = nullptr;
        distances[i].cities_key = -1;
        distances[i].distance = -1;
    }

    // Add some distances
    add_distance(distances, "Flagstaff", "Sedona", 20);
    add_distance(distances, "Sedona", "Cottonwood", 15);
    add_distance(distances, "Flagstaff", "Williams", 30);
    add_distance(distances, "ffatsgalF", "smailliW", 25);

    // Add more distances
    add_distance(distances, "Williams", "Phoenix", 180);
    add_distance(distances, "Phoenix", "Tucson", 120);
    add_distance(distances, "Flagstaff", "Grand Canyon", 80);
    add_distance(distances, "Cottonwood", "Jerome", 10);
    add_distance(distances, "Prescott", "Jerome", 40);
    add_distance(distances, "Prescott", "Phoenix", 100);
    add_distance(distances, "Sedona", "Phoenix", 110);
    add_distance(distances, "Sedona", "Flagstaff", 30);
    add_distance(distances, "Tucson", "Yuma", 200);
    add_distance(distances, "Yuma", "San Diego", 170);
    add_distance(distances, "Phoenix", "Grand Canyon", 220);
    add_distance(distances, "Flagstaff", "Las Vegas", 250);
    add_distance(distances, "Las Vegas", "Los Angeles", 270);

    // Find distances
    cout << "Distance from Flagstaff to Sedona: " << find_distance(distances, "Flagstaff", "Sedona") << endl;
    cout << "Distance from Sedona to Cottonwood: " << find_distance(distances, "Sedona", "Cottonwood") << endl;
    cout << "Distance from Flagstaff to Williams: " << find_distance(distances, "Flagstaff", "Williams") << endl;
    cout << "Distance from Flagstaff to Prescott: " << find_distance(distances, "Flagstaff", "Prescott") << endl;

    cout << "Distance from Williams to Phoenix: " << find_distance(distances, "Williams", "Phoenix") << endl;
    cout << "Distance from Phoenix to Tucson: " << find_distance(distances, "Phoenix", "Tucson") << endl;


    return 0;
}
