#include <string>
#include <FL/Fl.h>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Widget.H>
#include <iostream>

int main() {
	Fl_Window window(200, 200, "window title");
	Fl_Box box(0, 0, 200, 200, "Hey, I mean, Hello, World!");
	window.show();
	return Fl::run();
}