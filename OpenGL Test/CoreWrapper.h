//
//  CoreWrapper.h
//  OpenGL Test
//
//  Created by Janusz on 13/02/2017.
//  Copyright © 2017 Janusz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CoreWrapper : NSObject

+(void)setupOpenGLScene;
+(void)onSurfaceCreated;
+(void)onSurfaceChanged:(int)width h:(int)height;
+(void)onDrawFrame;

@end
