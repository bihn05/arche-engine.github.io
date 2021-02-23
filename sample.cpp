#include <graphics.h>
#include "function.h"

using namespace ege;

int main() {
	init();
	bool flag=0;
	while (!flag) {
		io_button(&flag,250,250,"button.png");
	}
	draw_pic(0,0,"a.jpg");
	getch();
	return 0;
}
