/* Signal Processing Library
    Including Averaging, Exponential, and Kalman Filter
    Copyright (c) 2020 Muhammad Fattah Al Fattika. Malang, Indonesia.
    All right reserved.

    Author Contact : mfattahalfattika@gmail.com
    github account : https://www.github.com/fattahalf
*/

#ifndef signalProcessing_h
#define signalProcessing_h

#include <Arduino.h>

float expFilter(const int _pin, float _factor);
float avrgFilter(int _pin, int _dataCount);

#endif