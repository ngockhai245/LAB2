/*
 * software_timer.h
 *
 *  Created on: Oct 31, 2023
 *      Author: LENOVO
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_dot_flag;
extern int timer_led_flag;

void timerRun();
void set_timer_dot(int duration);
void set_timer_led(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
