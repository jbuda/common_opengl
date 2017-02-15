//
//  MatrixMath.h
//  OpenGL Test
//
//  Created by Janusz on 13/02/2017.
//  Copyright © 2017 Janusz. All rights reserved.
//
#include <math.h>

typedef float vec4[4];
typedef vec4 mat4x4[4];

static inline void mat4x4PerspectiveProj(mat4x4 m, float fov, float aspect, float n, float f) {
  
  const float angleInRadians = (float)(fov * M_PI / 180.0);
  const float a = (float)(1.0 / tan(angleInRadians / 2.0));
  
  m[0][0] = a / aspect;
  m[1][0] = 0.0f;
  m[2][0] = 0.0f;
  m[3][0] = 0.0f;

  m[1][0] = 0.0f;
  m[1][1] = a;
  m[1][2] = 0.0f;
  m[1][3] = 0.0f;
  
  m[2][0] = 0.0f;
  m[2][1] = 0.0f;
  m[2][2] = -((f + n) / (f - n));
  m[2][3] = -1.0f;
  
  m[3][0] = 0.0f;
  m[3][1] = 0.0f;
  m[3][2] = -((2.0f * f * n) / (f - n));
  m[3][3] = 0.0f;
  
}
