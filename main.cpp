/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


int main()
{
    // Initialise the digital pins 1-4 as outputs 
    DigitalOut red(LED_RED);
    DigitalOut green(LED_GREEN);
    DigitalOut blue(LED_BLUE);
    DigitalOut led_arr[3] = {DigitalOut(LED_RED), DigitalOut(LED_BLUE),
                             DigitalOut(LED_GREEN)};

    while (true) {
        for(auto & led : led_arr) {
            led = !led;
            ThisThread::sleep_for(BLINKING_RATE);
        }
    }
}
