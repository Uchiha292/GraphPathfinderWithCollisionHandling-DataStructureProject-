#include <string>
#include<cstring>
#include<iostream>
using namespace std;


// Define the Distance struct
typedef struct {
    char* city1;
    char* city2;
    int cities_key;
    int distance;
} Distance;

/**
 * Function: add_distance
 * Process: Adds a distance record between two cities in the array.
 * Input data (parameter):
 *     distances[] - Array of Distance structs where the distance information will be stored.
 *     city1 - Name of the first city as a string.
 *     city2 - Name of the second city as a string.
 *     distance - The distance between city1 and city2 as an integer.
 * Output data (parameter): None
 * Output data (return): None
 * Dependencies: None
 * Complexity: O(1) assuming no need to search or resize the array.
 */
void add_distance(Distance distances[], const string& city1, const string& city2, int distance);
/**
 * Function: find_distance
 * Process: Searches for the distance between two specified cities in the array.
 * Input data (parameter):
 *     distances[] - Array of Distance structs where the distance information is stored.
 *     city1 - Name of the first city as a string.
 *     city2 - Name of the second city as a string.
 * Output data (parameter): None
 * Output data (return): Distance between the cities if found, otherwise -1.
 * Dependencies: None
 * Complexity: O(n), where n is the number of entries in the distances array.
 */
int find_distance(Distance distances[], const string& city1, const string& city2);