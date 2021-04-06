#pragma once
#include <vector>
#include <string>
#include <ctime>


enum class exc {
	dl,
	sq,
	ohp,
	lunges,
	bench,
	pull_ups,
	yates,
	db_press
};

class lift {
public:
	lift(enum exc name, int sets, int reps, int weights, float intensity, int days_since) {};
private:
	enum exc name;
	 int weight, reps, sets;
	 float intensity;
	 tm date;
};