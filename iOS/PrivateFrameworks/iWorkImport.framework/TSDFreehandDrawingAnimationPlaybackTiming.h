//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TSDFreehandDrawingInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingAnimationPlaybackTiming : NSObject
{
    TSDFreehandDrawingInfo *_freehandDrawingInfo;
    NSArray *_fillShapes;
    NSArray *_strokeShapes;
}

- (void).cxx_destruct;
- (id)p_fillTimingCurve;
- (double)visibilityOfChild:(id)arg1 atPercent:(double)arg2;
- (_Bool)shouldParameterizeStrokesWithDuration:(double)arg1 framesPerSecond:(double)arg2;
- (id)initWithFreehandDrawingInfo:(id)arg1;

@end
