//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMActionSet.h>

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSDate, NSSet, NSString, NSUUID;
@protocol HFIconDescriptor;

@interface HMActionSet (HFDebugging) <HFStateDumpBuildable, HFFavoritable, HFHomeKitObject, HFReorderableHomeKitObject>
+ (id)hf_standardIconDescriptorForActionSetType:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (_Bool)hf_isShortcutOwned;
- (id)hf_shortcutAction;
- (id)hf_updateIconDescriptor:(id)arg1;
@property(readonly, nonatomic) id <HFIconDescriptor> hf_iconDescriptor;
@property(readonly, nonatomic) _Bool hf_requiresDeviceUnlock;
- (_Bool)hf_isAnonymous;
- (_Bool)hf_affectsServiceWithIdentifier:(id)arg1;
- (id)hf_affectedServices;
- (id)hf_affectedProfiles;
- (id)hf_affectedMediaSessions;
- (id)hf_affectedCharacteristics;
@property(readonly, copy, nonatomic) NSSet *hf_characteristicWriteActions;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
