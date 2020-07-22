//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessorySettings.h>

@class HFAccessorySettingsValueManager, NATreeNode;

@interface HMAccessorySettings (HFAdditions)
+ (id)hf_MediaAccessoryCodex;
@property(readonly, nonatomic) HFAccessorySettingsValueManager *hf_valueManager;
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;
- (id)hf_accessorySettingAtKeyPath:(id)arg1;
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;
@property(readonly, nonatomic) NATreeNode *hf_codex;
@end

