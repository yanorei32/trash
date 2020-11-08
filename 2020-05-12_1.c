struct X_t {
	int innerInt;
	float innerFloat;
}

struct Y_t {
	int y;
	struct X_t *innerStruct;
}

struct Y_t y_value;
struct X_t x_value;

x_value.innerInt = 0;

y_value.innerStruct = &x_value;

y_value.innerStruct->innerInt = 0;

