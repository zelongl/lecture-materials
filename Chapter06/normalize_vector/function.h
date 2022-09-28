//
// Created by Erik Gabrielsen on 9/14/22.
//

#ifndef VECTORS_FUNCTIONS_H
#define VECTORS_FUNCTIONS_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;
/**
 * Prototypes
 */

void display(int arr[], const int &size);
void display(vector<string> &myVector);

// normalization
int findMin(const vector<int> &numbers);
void normalize(vector<int> &numbers);

#endif // VECTORS_FUNCTIONS_H
