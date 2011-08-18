//
//  EEShape.h
//  ExampleEngine
//
//  Created by Ian Terrell on 8/17/11.
//  Copyright (c) 2011 Ian Terrell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>
#import "EEScene.h"

@interface EEShape : NSObject {
  NSMutableData *vertexData, *vertexColorData, *textureCoordinateData;
  GLKVector4 color;
  BOOL useConstantColor;
  
  GLKVector2 position, scale;
  float rotation;
  
  GLKTextureInfo *texture;
  
  NSMutableArray *children;
  EEShape *parent;
}

@property(readonly) int numVertices;
@property(readonly) GLKVector2 *vertices;
@property(readonly) GLKVector4 *vertexColors;
@property(readonly) GLKVector2 *textureCoordinates;
@property GLKVector4 color;
@property BOOL useConstantColor;
@property GLKVector2 position, scale;
@property float rotation;
@property(strong, readonly) NSMutableArray *children;
@property(strong) EEShape *parent;
@property(readonly) GLKMatrix4 modelviewMatrix;
@property(strong,readonly) GLKTextureInfo *texture;

-(void)renderInScene:(EEScene *)scene;
-(void)setTextureImage:(UIImage *)image;
-(void)addChild:(EEShape *)child;

@end