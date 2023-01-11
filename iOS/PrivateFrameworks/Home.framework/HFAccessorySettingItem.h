//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitSettingItemProtocol-Protocol.h>

@class HFAccessorySettingsEntity, HMSetting, NSDictionary, NSString;
@protocol HFHomeKitObject, HFHomeKitSettingsVendor;

@interface HFAccessorySettingItem <HFHomeKitSettingItemProtocol>
{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    HMSetting *_setting;
    HFAccessorySettingsEntity *_entity;
    NSDictionary *_usageOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(retain, nonatomic) HFAccessorySettingsEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) HMSetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (void)_decorateOutcomeWithResultKeys:(id)arg1;
- (void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (_Bool)_validateKeyPathDependencies;
- (id)value;
- (id)updateValue:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) NSString *settingKeyPath;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
