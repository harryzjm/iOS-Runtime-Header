//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessorySelectionSettingItem, NSDictionary;

@interface HFAccessorySettingOptionItem
{
    HMAccessorySelectionSettingItem *_optionItem;
    NSDictionary *_usageOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(retain, nonatomic) HMAccessorySelectionSettingItem *optionItem; // @synthesize optionItem=_optionItem;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)settingKeyPath;
- (id)value;
- (id)toggleSelection;
- (id)homeKitObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4;

@end
