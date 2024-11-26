#include "Graph_p2_lib.h"
#include <cstring>

// Hash function to generate a key
int hash_function(const char* city1, const char* city2) {
    int sum = 0;
    while (*city1) {
        sum += *city1++;
    }
    while (*city2) {
        sum += *city2++;
    }
    return sum % 20; // Assuming the maximum length of the hash table is 20
}

// Function to add a distance to the hash table
void add_distance(Distance distances[], const string& city1, const string& city2, int distance) {
    int key = hash_function(city1.c_str(), city2.c_str());

    // Linear probing to resolve collisions
    while (distances[key].city1 != nullptr) {
        key = (key + 1) % 20; // according to the hash func
    }

    // Add the distance to the hash table
    distances[key].city1 = new char[city1.length() + 1];
    strcpy_s(distances[key].city1, city1.length() + 1, city1.c_str());
    distances[key].city2 = new char[city2.length() + 1];
    strcpy_s(distances[key].city2, city2.length() + 1, city2.c_str());
    distances[key].cities_key = hash_function(city1.c_str(), city2.c_str());
    distances[key].distance = distance;
}

// Function to find a distance in the hash table
int find_distance(Distance distances[], const string& city1, const string& city2) {
    int key = hash_function(city1.c_str(), city2.c_str());

    // Linear probing to find the distance
    while (distances[key].cities_key != -1) {
        if (strcmp(distances[key].city1, city1.c_str()) == 0 && strcmp(distances[key].city2, city2.c_str()) == 0) {
            // Found the matching distance
            return distances[key].distance;
        }
        // Collision occurred or key doesn't match, move to the next position
        key = (key + 1) % 20; // Assuming the maximum length of the hash table is 20
    }

    // Distance not found
    return -1;
}