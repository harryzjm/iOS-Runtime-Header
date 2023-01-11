//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PKLiveStrokesParticlesAnimation : NSObject
{
    NSArray *_strokes;
    double _startTime;
    double _duration;
    struct CGRect _destinationFrame;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) struct CGRect destinationFrame; // @synthesize destinationFrame=_destinationFrame;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (_Bool)isDoneAtTime:(double)arg1;
- (void)_calculateBounds;
- (id)initWithStrokes:(id)arg1 startTime:(double)arg2 duration:(double)arg3 destinationFrame:(struct CGRect)arg4;

@end
