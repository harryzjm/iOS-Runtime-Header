//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingTouchSequence : NSObject
{
    _Bool _didReceiveSpatialFocusUpdate;
    _Bool _didReceiveProgrammaticFocusUpdate;
    double _peakSpeed;
    struct CGPoint _startLocation;
    struct CGPoint _previousLocation;
    struct CGPoint _endLocation;
    struct CGVector _axisLockedDistanceAccumulator;
}

@property(nonatomic) _Bool didReceiveProgrammaticFocusUpdate; // @synthesize didReceiveProgrammaticFocusUpdate=_didReceiveProgrammaticFocusUpdate;
@property(nonatomic) _Bool didReceiveSpatialFocusUpdate; // @synthesize didReceiveSpatialFocusUpdate=_didReceiveSpatialFocusUpdate;
@property(nonatomic) struct CGVector axisLockedDistanceAccumulator; // @synthesize axisLockedDistanceAccumulator=_axisLockedDistanceAccumulator;
@property(nonatomic) double peakSpeed; // @synthesize peakSpeed=_peakSpeed;
@property(nonatomic) struct CGPoint endLocation; // @synthesize endLocation=_endLocation;
@property(nonatomic) struct CGPoint previousLocation; // @synthesize previousLocation=_previousLocation;
@property(nonatomic) struct CGPoint startLocation; // @synthesize startLocation=_startLocation;

@end

