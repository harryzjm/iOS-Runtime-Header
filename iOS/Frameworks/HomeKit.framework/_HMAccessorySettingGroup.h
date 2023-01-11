//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMerging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessorySettings, HMFUnfairLock, NSArray, NSMutableSet, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue, _HMAccesorySettingGroupDelegate;

__attribute__((visibility("hidden")))
@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging>
{
    HMFUnfairLock *_lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    id <_HMAccesorySettingGroupDelegate> _delegate;
    NSUUID *_identifier;
    NSString *_name;
    _HMContext *_context;
    HMAccessorySettings *_accessorySettings;
}

+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
@property(nonatomic) __weak HMAccessorySettings *accessorySettings; // @synthesize accessorySettings=_accessorySettings;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <_HMAccesorySettingGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)mergeGroups:(id)arg1;
- (_Bool)mergeSettings:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (id)logIdentifier;
- (void)removeGroup:(id)arg1 fromGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)notifyDelegateOfRemovedGroup:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)addGroup:(id)arg1 toGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)notifyDelegateOfAddedGroup:(id)arg1;
- (void)addGroup:(id)arg1;
- (id)groupWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *groups;
- (void)removeSetting:(id)arg1 fromGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)notifyDelegateOfRemovedSetting:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)addSetting:(id)arg1 toGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)notifyDelegateOfAddedSetting:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *settings;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
- (id)clientQueue;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
