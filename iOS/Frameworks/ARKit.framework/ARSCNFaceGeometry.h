//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;

@interface ARSCNFaceGeometry : SCNGeometry
{
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _normalBuffer;
}

+ (id)faceGeometryWithDevice:(id)arg1 fillMesh:(_Bool)arg2;
+ (id)faceGeometryWithDevice:(id)arg1;
+ (id)faceGeometryWithDevice:(id)arg1 eyesFilled:(_Bool)arg2 mouthFilled:(_Bool)arg3;
@property(retain, nonatomic) id <MTLBuffer> normalBuffer; // @synthesize normalBuffer=_normalBuffer;
@property(retain, nonatomic) id <MTLBuffer> vertexBuffer; // @synthesize vertexBuffer=_vertexBuffer;
- (void).cxx_destruct;
- (void)updateFromFaceGeometry:(id)arg1;

@end

