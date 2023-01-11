//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMIFaceTrackerMatch : NSObject
{
    unsigned long long _projectedFaceIndex;
    unsigned long long _detectedFaceIndex;
    double _score;
}

@property(readonly) double score; // @synthesize score=_score;
@property(readonly) unsigned long long detectedFaceIndex; // @synthesize detectedFaceIndex=_detectedFaceIndex;
@property(readonly) unsigned long long projectedFaceIndex; // @synthesize projectedFaceIndex=_projectedFaceIndex;
- (id)initWithProjectedFaceIndex:(unsigned long long)arg1 detectedFaceIndex:(unsigned long long)arg2 score:(double)arg3;

@end
