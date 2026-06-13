#include <stdio.h>
#include <raylib.h>

#define WIDTH 900
#define HEIGHT 600

int main(int argc, char *argv[]) {
  InitWindow(WIDTH, HEIGHT, "3D Cube");

  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();

    EndDrawing();
  }
  return 0;
}
