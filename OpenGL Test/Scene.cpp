//
//  Scene.cpp
//  OpenGL Test
//
//  Created by Janusz on 13/02/2017.
//  Copyright © 2017 Janusz. All rights reserved.
//

#include "Scene.h"
#include <OpenGLES/ES3/gl.h>
#include "MatrixMath.h"

static mat4x4 projectionMatrix;

void onSurfaceCreated() {
  glClearColor(0, 104/255.0, 55.0/255.0, 1.0);
  glEnable(GL_DEPTH_TEST);
}

void onSurfaceChanged(int width,int height) {
  glViewport(0, 0, width, height);
  
  mat4x4PerspectiveProj(projectionMatrix, 90, 0.5f, 1.0f, 10.0f);
}

void onDrawFrame() {
  glClear(GL_COLOR_BUFFER_BIT);
}
