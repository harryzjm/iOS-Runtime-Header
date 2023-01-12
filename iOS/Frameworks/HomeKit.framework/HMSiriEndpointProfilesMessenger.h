//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>

@class HMFMessageDispatcher, NSString, NSUUID;

@interface HMSiriEndpointProfilesMessenger : NSObject <HMFLogging>
{
    NSUUID *_messageTargetUUID;
    HMFMessageDispatcher *_messageDispatcher;
}

+ (id)logCategory;
+ (id)messageTargetUUIDWithHomeUUID:(id)arg1;
- (void).cxx_destruct;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;
- (void)sendDeleteSiriHistoryRequestWithAccessoryUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendApplyOnboardingSelectionsRequestWithAccessoryUUID:(id)arg1 onboardingSelections:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
