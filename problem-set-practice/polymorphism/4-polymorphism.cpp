#include <iostream>
// Drawing Shapes:➡️
// -> Design a simple drawing program where you can draw various shapes (e.g., Circle, Square, Triangle, etc.) on a canvas.
// -> Use polymorphism to manage different shapes.
// -> Implement a function to calculate the total area of all shapes drawn.

// canvas/base class/Board of where shape draw
class canvas
{
private:
    int length;
    int width;

public:
    canvas() = default;
    canvas(int a, int b)
    {
        length = a;
        width = b;
    }

    void drawLine()
    {
        std::cout << "Canvas function - draw()" << std::endl;
    };
};

// class -> circle
class circle : public canvas
{
private:
    double radious;

public:
    double drawLine(int a)
    {
        std::cout << "Circle -> Line draw success" << std::endl;
        std::cout << "Radious = " << a << std::endl;

        return radious;
    }
};

// class -> square
class square : public canvas
{
private:
    int length;

public:
    void drawLine(int a)
    {
        std::cout << "Square -> Line draw success" << std::endl;
        std::cout << "Length(Total) = " << a + a + a + a << std::endl;
    }
};

// class ->  Triangle
class triangle : public canvas
{
private:
    int base;
    int length;

public:
    void drawLine(int a, int b)
    {
        std::cout << "Triangle -> Line draw success" << std::endl;
        std::cout << "Base and Length = " << a << " " << b << std::endl;
    }
};

int main()
{
    canvas *canvasPtr;
    canvas canvas_one(10, 5);

    circle circle_one;
    square square_one;
    triangle triangle_one;

    canvasPtr = &circle_one;
    canvasPtr->drawLine(20);

    canvasPtr = &square_one;
    canvasPtr->drawLine(20);

    canvasPtr = &triangle_one;
    canvasPtr->drawLine(5, 10);
    return 0;
}