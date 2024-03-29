//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventFaceClassificationResolver : HMFObject
{
    HMDHome *_home;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;
- (id)personManagerWithUUID:(id)arg1;
- (id)_faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

