//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessorySetting, HMDAccessorySettingTarget, HMFMessage, HMFMessageDispatcher, NSObject, NSString;
@protocol HMDAccessorySettingUpdateDelegate, OS_dispatch_queue;

@interface HMDAccessorySettingUpdateBase : HMFObject <HMFLogging>
{
    NSString *_sessionID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMFMessage *_originalMessage;
    HMFMessageDispatcher *_remoteMessageDispatcher;
    HMDAccessorySettingTarget *_target;
    HMDAccessorySetting *_setting;
    id <HMDAccessorySettingUpdateDelegate> _delegate;
    id _value;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak id value; // @synthesize value=_value;
@property(readonly, nonatomic) __weak id <HMDAccessorySettingUpdateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HMDAccessorySetting *setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) HMDAccessorySettingTarget *target; // @synthesize target=_target;
@property(readonly, nonatomic) HMFMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(readonly, nonatomic) HMFMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)callDelegate:(id)arg1;
- (void)update;
- (void)saveLocally:(unsigned long long)arg1;
- (id)_processMessage:(id)arg1 setting:(id)arg2;
- (id)updateValueWithPayload:(id)arg1 setting:(id)arg2;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 outError:(id *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

