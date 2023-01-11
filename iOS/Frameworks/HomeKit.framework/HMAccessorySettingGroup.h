//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/_HMAccesorySettingGroupDelegate-Protocol.h>

@class HMFUnfairLock, NSArray, NSMutableSet, NSString, _HMAccessorySettingGroup;

@interface HMAccessorySettingGroup : NSObject <_HMAccesorySettingGroupDelegate, HMFLogging>
{
    HMFUnfairLock *_lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    _HMAccessorySettingGroup *_internal;
    HMAccessorySettingGroup *_group;
}

+ (id)logCategory;
@property __weak HMAccessorySettingGroup *group; // @synthesize group=_group;
@property(readonly) _HMAccessorySettingGroup *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didAddSetting:(id)arg2;
- (void)removeGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyClientOfRemovedGroup:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)_notifyClientOfAddedGroup:(id)arg1;
- (void)addGroup:(id)arg1;
@property(readonly, copy) NSArray *groups;
- (void)removeSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyClientOfRemovedSetting:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)_notifyClientOfAddedSetting:(id)arg1;
- (void)addSetting:(id)arg1;
@property(readonly, copy) NSArray *settings;
@property(readonly, copy) NSString *keyPath;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *localizedTitle;
- (id)initWithInternal:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

