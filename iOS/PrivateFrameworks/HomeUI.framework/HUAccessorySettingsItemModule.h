//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HFHomeKitSettingsObserver-Protocol.h>
#import <HomeUI/HFMediaObjectObserver-Protocol.h>

@class HFAccessorySettingsEntity, HFAccessorySettingsItemProvider, HMAccessory, HMSettingGroup, HMSettings, NATreeNode, NSSet, NSString;
@protocol HFHomeKitSettingsVendor;

@interface HUAccessorySettingsItemModule <HFHomeKitSettingsObserver, HFMediaObjectObserver>
{
    HFAccessorySettingsItemProvider *_accessorySettingsItemProvider;
    NSSet *_itemProviders;
    HMAccessory *_accessory;
    HMSettings *_settings;
    NATreeNode *_codex;
    HFAccessorySettingsEntity *_parentEntity;
    HMSettingGroup *_parentSettingGroup;
    NSSet *_settingItemsToBeDisplayed;
    NSSet *_groupItemsToBeDisplayed;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
@property(retain, nonatomic) NSSet *groupItemsToBeDisplayed; // @synthesize groupItemsToBeDisplayed=_groupItemsToBeDisplayed;
@property(retain, nonatomic) NSSet *settingItemsToBeDisplayed; // @synthesize settingItemsToBeDisplayed=_settingItemsToBeDisplayed;
@property(readonly, nonatomic) HMSettingGroup *parentSettingGroup; // @synthesize parentSettingGroup=_parentSettingGroup;
@property(readonly, nonatomic) HFAccessorySettingsEntity *parentEntity; // @synthesize parentEntity=_parentEntity;
@property(readonly, nonatomic) NATreeNode *codex; // @synthesize codex=_codex;
@property(readonly, nonatomic) HMSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HFAccessorySettingsItemProvider *accessorySettingsItemProvider; // @synthesize accessorySettingsItemProvider=_accessorySettingsItemProvider;
- (_Bool)checkSoftwareVersionForAccessories:(id)arg1 neededSoftwareVersion:(id)arg2;
- (id)getAllHomePodFromItem:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (void)settings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (void)_resetIfNeeded;
- (id)_itemSectionForGroup:(id)arg1 entity:(id)arg2 settingItems:(id)arg3 groupItems:(id)arg4;
- (id)_itemSectionsForGroupKeyPaths:(id)arg1;
- (id)_itemSectionsForShowInSeperateSectionItems:(id)arg1;
- (id)_itemSectionsForParentGroupWithItems;
- (id)_itemSectionWithEntity:(id)arg1 items:(id)arg2;
- (void)_unregisterForAccessorySettingsUpdates;
- (void)_registerForAccessorySettingsUpdates;
- (id)updateItem:(id)arg1 withValue:(id)arg2;
- (void)updateItemsForKeyPath:(id)arg1;
- (void)updateItems:(id)arg1 matchingDependency:(id)arg2;
- (void)updateItems:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (void)unregisterForExternalUpdates;
- (void)registerForExternalUpdates;
- (id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2 usageOptions:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 homeKitSettingsVendor:(id)arg2 usageOptions:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 usageOptions:(id)arg4;
- (id)initWithItemUpdater:(id)arg1 mediaAccessoryItem:(id)arg2;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
