#ifdef MIC_SPM1423

/**
 * @file test.h
 * @author Forairaaaaa
 * @brief
 * @version 0.1
 * @date 2023-05-25
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <fft.h>
#include "driver/i2s.h"
#include "core/display.h"
#include <globals.h>

/* Mic */
void mic_init();
void mic_test();
void mic_test_one_task(int s_width, int s_height);

void DisplayMicro();

void new_mic_test();
void new_mic_test_fft();

#endif
