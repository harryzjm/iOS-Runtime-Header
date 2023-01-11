//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KNMovieSegment;

__attribute__((visibility("hidden")))
@interface KNRecordingMovieSegmentTrimmer : NSObject
{
    KNMovieSegment *_movieSegment;
    double _trimDurationInSeconds;
}

+ (_Bool)canTrimMovieSegmentsInContext:(id)arg1;
- (void).cxx_destruct;
- (void)trimMovieSegmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMovieSegment:(id)arg1 trimDuration:(double)arg2;

@end

