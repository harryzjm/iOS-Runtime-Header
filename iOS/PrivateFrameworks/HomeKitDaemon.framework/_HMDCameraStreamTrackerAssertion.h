//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraSessionID, HMDCameraStreamTracker;

@interface _HMDCameraStreamTrackerAssertion : HMFObject
{
    HMDCameraStreamTracker *_streamTracker;
    HMDCameraSessionID *_streamSessionID;
}

@property(readonly, nonatomic) HMDCameraSessionID *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property(readonly, nonatomic) __weak HMDCameraStreamTracker *streamTracker; // @synthesize streamTracker=_streamTracker;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;

@end

