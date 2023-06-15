//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSessionFactory : HMFObject
{
}

- (_Bool)isVideoInitData:(id)arg1 combinableWithVideoInitData:(id)arg2;
- (id)createUploaderWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(id)arg5 workQueue:(id)arg6 logIdentifier:(id)arg7;
- (id)createTimelapseFragmentManagerWithLogIdentifier:(id)arg1;
- (id)createSignificantEventManagerWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3;
- (id)createVideoAnalyzerWithConfiguration:(id)arg1 identifier:(id)arg2;
@property(readonly) double recordingExtensionDuration;
@property(readonly) double maximumClipDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

