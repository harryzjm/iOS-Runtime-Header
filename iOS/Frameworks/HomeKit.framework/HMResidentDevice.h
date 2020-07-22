//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDelegateCaller, HMFMessageDispatcher, HMHome, NSObject, NSString, NSUUID;
@protocol HMResidentDeviceDelegate, OS_dispatch_queue;

@interface HMResidentDevice <HMObjectMerge, NSSecureCoding>
{
    _Bool _enabled;
    unsigned long long _status;
    HMHome *_home;
    NSUUID *_accountIdentifier;
    unsigned long long _capabilities;
    id <HMResidentDeviceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDelegateCaller *_delegateCaller;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <HMResidentDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatedEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property __weak HMHome *home; // @synthesize home=_home;
@property unsigned long long status; // @synthesize status=_status;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end
