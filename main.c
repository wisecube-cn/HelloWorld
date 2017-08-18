#include <stdio.h>

/*Main
*	ADD systemInit();
*	ADD delayMs();
*	
*	version:1.1
*	date:	2017/08/08
*	Author:	hnjzsdx
*/
int main(){
	systemInit();//Init the board
	printf("systemInit OK!\n");
	delayMs(1000);
	
	printf("HelloWorld!\n");
	
	return 0;
}

/*Init all the system.
*	change the time of delay from 1000 to 500
*
*	version:1.1
*	date:	2017/08/08
*	Author:	hnjzsdx
*/
void systemInit(){
	printf("systemInit ing\n");
	delayMs(500);
	
}

/*delayMs delay a while
*	
*	version:1.0
*	date:	2017/08/08
*	Author:	hnjzsdx
*/
void delayMs(int n){
	while(n--){
		;
	}
}