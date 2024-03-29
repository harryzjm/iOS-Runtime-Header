//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraRemoteStreamTracker, HMDCameraStreamSessionID;

__attribute__((visibility("hidden")))
@interface _HMDCameraRemoteStreamTrackerAssertion : HMFObject
{
    HMDCameraRemoteStreamTracker *_streamTracker;
    HMDCameraStreamSessionID *_streamSessionID;
}

- (void).cxx_destruct;
@property(readonly) HMDCameraStreamSessionID *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property __weak HMDCameraRemoteStreamTracker *streamTracker; // @synthesize streamTracker=_streamTracker;
- (void)dealloc;
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;

@end

