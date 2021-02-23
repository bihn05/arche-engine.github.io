#ifndef _FUNCTION_
#define _FUNCTION_

#include <graphics.h>
#include <fstream>
#include <iostream>

using namespace std;
using namespace ege;

int win_w=800,win_h=600;
bool welcome=0;
ifstream bmpfile;

void init() {
	if (!welcome)setinitmode(2);
	initgraph(win_w,win_h);
}
void draw_pic(int x,int y,string path) {
	PIMAGE pimg = newimage();
	getimage(pimg,path.c_str());
	putimage(x,y,pimg);
	delimage(pimg);
}
void draw_point(int x,int y,int color) {
	putpixel(x,y,color);
}
void draw_line(int x1,int y1,int x2,int y2,int color) {
	setcolor(color);
	line(x1,y1,x2,y2);
}
void io_button(bool* flag,int x,int y,string imgpath) {
	mouse_msg msg={0};
	PIMAGE pimg = newimage();
	getimage(pimg,imgpath.c_str());
	putimage(x,y,pimg);
	while (mousemsg()) {
		msg=getmouse();
	}
	if (msg.is_left() && msg.x>x && msg.x<x+getwidth(pimg) && msg.y>y && msg.y<y+getheight(pimg))*flag=1;
	delimage(pimg);
}

#endif
