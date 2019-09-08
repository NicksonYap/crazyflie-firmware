#pragma once

#include <stdbool.h>

// Naive 3d vector type.
#define vec3d_size 3
typedef float vec3d[vec3d_size];

typedef struct baseStationGeometry_s {
  float origin[3];
  float mat[3][3];
} __attribute__((packed)) baseStationGeometry_t;

void calc_ray_vec(baseStationGeometry_t *bs, float angle1, float angle2, vec3d res, vec3d origin);

bool lighthouseGeometryGetPosition(baseStationGeometry_t baseStations[2], float angles[4], vec3d position, float *position_delta);

bool lighthouseGeometryBestFitBetweenRays(vec3d _orig0, vec3d _orig1, vec3d _u, vec3d _v, vec3d _D, vec3d pt0, vec3d pt1);
