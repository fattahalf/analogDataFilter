/* Signal Processing Library
    Including Averaging, Exponential, and Kalman Filter
    Copyright (c) 2020 Muhammad Fattah Al Fattika. Malang, Indonesia.
    All right reserved.

    Author Contact : mfattahalfattika@gmail.com
    github account : https://www.github.com/fattahalf
*/

#ifndef signalProcessing_cpp
#define signalProcessing_cpp

#include <Arduino.h>
#include <signalProcessing.h>

float _prev_ = 0;

float expFilter(const int _pin, float _factor){
    float _rawData = analogRead(_pin);
    float _expFilter = (_factor * _rawData) + (1 - _factor) * _prev_;
    _prev_ = _expFilter;
    return _expFilter;
}

float avrgFilter(const int _pin, int _dataCount) {
    float _sum = 0, _sum_ = 0, _averageFilter = 0;
    for (int _i = 0; _i < _dataCount; _i++) {
        _sum = analogRead(_pin);
        _sum_ = _sum + _sum_;
    }
    _averageFilter = _sum_ / _dataCount;
    return _averageFilter;
}


#endif