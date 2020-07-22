//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessorySettingItemProtocol-Protocol.h>

@class HFAccessorySettingsEntity, HMAccessoryProfile, HMAccessorySelectionSetting, HMAccessorySettingGroup, NSString;
@protocol HFAccessorySettings, HFHomeKitObject;

@interface HFAccessorySettingGroupItem <HFAccessorySettingItemProtocol>
{
    HMAccessoryProfile<HFAccessorySettings> *_accessoryProfile;
    HFAccessorySettingsEntity *_entity;
    HMAccessorySettingGroup *_settingGroup;
    HMAccessorySelectionSetting *_selectionSetting;
}

@property(readonly, nonatomic) HMAccessorySelectionSetting *selectionSetting; // @synthesize selectionSetting=_selectionSetting;
@property(readonly, nonatomic) HMAccessorySettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(readonly, nonatomic) HFAccessorySettingsEntity *entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile; // @synthesize accessoryProfile=_accessoryProfile;
- (void).cxx_destruct;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) NSString *settingKeyPath;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessoryProfile:(id)arg1 selectionSetting:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 group:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 entity:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
