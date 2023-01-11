//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClockKitUI/CLKUIQuad.h>

@class NUScene;

@interface NUGLQuad : CLKUIQuad
{
    unsigned int _isPrepared:1;
    unsigned int _vertexArray;
    double _baseTime;
    NUScene *_scene;
}

@property(retain, nonatomic) NUScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (void)prepare;

@end
