//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface HMIVideoFrameTrackerFrameCandidate : HMFObject
{
    float _score;
    struct opaqueCMSampleBuffer *_sbuf;
    NSArray *_motionDetections;
    NSSet *_tracks;
}

- (void).cxx_destruct;
@property(readonly) NSSet *tracks; // @synthesize tracks=_tracks;
@property(readonly) NSArray *motionDetections; // @synthesize motionDetections=_motionDetections;
@property(readonly) float score; // @synthesize score=_score;
@property(readonly) struct opaqueCMSampleBuffer *sbuf; // @synthesize sbuf=_sbuf;
- (id)description;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 score:(float)arg2 motionDetections:(id)arg3 tracks:(id)arg4;

@end

