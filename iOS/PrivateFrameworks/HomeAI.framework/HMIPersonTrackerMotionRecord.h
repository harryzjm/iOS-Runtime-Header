//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMIPersonTrackerMotionRecord : NSObject
{
    NSArray *_motionVectors;
    CDStruct_1b6d18a9 _time;
    struct CGRect _regionOfInterest;
}

- (void).cxx_destruct;
@property(readonly) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(readonly) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly) NSArray *motionVectors; // @synthesize motionVectors=_motionVectors;
- (id)initWithMotionVectors:(id)arg1 regionOfInterest:(struct CGRect)arg2 time:(CDStruct_1b6d18a9)arg3;

@end
