#include <iostream>

struct Rectangle
{
	int x_left;
	int x_right;
	int y_down;
	int y_up;
};

void read(Rectangle& r)
{
	std::cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2)
{
	if(r1.y_down > r2.y_up or r2.y_down > r1. y_up or r1.x_left > r2.x_right or r2.x_left > r1.x_right) return 0;
	if(r1.x_left == r2.x_left && r1.x_right == r2.x_right && r1.y_down == r2.y_down && r1.y_up == r2.y_up) return 4;
	if(r2.x_left <= r1.x_left && r2.x_right >= r1.x_right && r2.y_down <= r1.y_down && r2.y_up >= r1.y_up) return 1;
	if(r1.x_left <= r2.x_left && r1.x_right >= r2.x_right && r1.y_down <= r2.y_down && r1.y_up >= r2.y_up) return 2;

	return 3;
}

int main()
{
	unsigned int n;

	std::cin >> n;

	for(unsigned int i = 0; i < n; i++)
	{
		Rectangle r1, r2;

		read(r1);
		read(r2);

		int rel = relationship(r1, r2);

		if(rel == 0) std::cout << "rectangles do not intersect" << std::endl;
		if(rel == 1) std::cout << "the first rectangle is inside the second one" << std::endl;
		if(rel == 2) std::cout << "the second rectangle is inside the first one" << std::endl;
		if(rel == 3) std::cout << "rectangles intersect" << std::endl;
		if(rel == 4) std::cout << "rectangles are identical" << std::endl;
	}
}