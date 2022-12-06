/*
 * tun_fsm.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ADMIN
 */
#include "tun_fsm.h"

void tun_fsm(){
	switch(status) {
	case TUN_RED:
		RED_1();
		GREEN_2();
		increaseTime(1);
		break;
	case TUN_YELLOW:
		YELLOW_1();
		RED_2();
		break;
	case TUN_GREEN:
		GREEN_1();
		YELLOW_2();

		break;
	default:
		break;
	}
}

void increaseTime(int count){
	if(count < 9){
		count++;
	} else {
		count = 0;
	}
}
