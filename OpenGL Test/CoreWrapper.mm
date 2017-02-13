//
//  CoreWrapper.m
//  OpenGL Test
//
//  Created by Janusz on 13/02/2017.
//  Copyright © 2017 Janusz. All rights reserved.
//

#import "CoreWrapper.h"
#import "Scene.h"

@implementation CoreWrapper

+(void)setupOpenGLScene {
  NSLog(@"In the opengl setup");
  
}

+(void)onSurfaceCreated {
  onSurfaceCreated();
}

+(void)onSurfaceChanged:(int)width h:(int)height {
  onSurfaceChanged(width, height);
}

+(void)onDrawFrame {
  onDrawFrame();
}

@end
