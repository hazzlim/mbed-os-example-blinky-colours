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
    DigitalOut led_arr[3] = { DigitalOut(LED_RED, 1),
                              DigitalOut(LED_BLUE, 1),
                              DigitalOut(LED_GREEN, 1) };

    while (true) {
        for(auto & led : led_arr) {
            led = !led;
            ThisThread::sleep_for(BLINKING_RATE);
            led = !led;
        }
    }
}
