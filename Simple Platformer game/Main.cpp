#include <raylib.h>

using namespace std;

int main()
{
	InitWindow(800, 450, "Platformer");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}