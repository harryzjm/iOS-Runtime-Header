//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraParameterSelection : HMFObject
{
    HMDCameraStreamSessionID *_sessionID;
}

+ (id)logCategory;
+ (id)_selectedCryptoSuiteFromCameraCryptoSuites:(id)arg1;
+ (id)selectedSRTPParametersFromCryptoSuites:(id)arg1;
+ (id)selectedParametersFromPreferredParameters:(id)arg1 deviceSupportedParameters:(id)arg2 cameraSupportedParameters:(id)arg3 overriddenParameters:(id)arg4 parameterDescription:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

