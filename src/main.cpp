#include "../include/rtweekend.h"

#include "../include/camera.h"
#include "../include/hittable.h"
#include "../include/hittable_list.h"
#include "../include/sphere.h"

int main(int argc, char *argv[]) {
  hittable_list world;

  world.add(make_shared<sphere>(point3(0, 0, -1), 0.5));
  world.add(make_shared<sphere>(point3(0, -100.5, -1), 100));

  camera cam;

  cam.aspect_ratio = 16.0 / 9.0;
  cam.image_width = 400;
  cam.samples_per_pixel = 100;
  cam.max_depth = 50;

  cam.render(world);

  return EXIT_SUCCESS;
}
