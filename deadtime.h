#ifndef __DEADTIME_H 
#define __DEADTIME_H

#include "sys.h"


void _tim1_deadtime_gpio_config(void);
void my_tim1_deadtime_config(u16 arr, u16 width, u16 deadtime);
 



#endif 