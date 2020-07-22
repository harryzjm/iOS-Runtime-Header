//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKUISettingsGroupDescription;
@protocol SKUISettingsGroupControllerDelegate;

@interface SKUISettingsGroupController : NSObject
{
    id <SKUISettingsGroupControllerDelegate> _delegate;
    NSMutableArray *_settingDescriptions;
    SKUISettingsGroupDescription *_settingsGroupDescription;
}

@property(retain, nonatomic) SKUISettingsGroupDescription *settingsGroupDescription; // @synthesize settingsGroupDescription=_settingsGroupDescription;
@property(retain, nonatomic) NSMutableArray *settingDescriptions; // @synthesize settingDescriptions=_settingDescriptions;
@property(nonatomic) __weak id <SKUISettingsGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_viewForSettingDescription:(id)arg1;
- (void)_reloadSettingDescription:(id)arg1;
- (void)attachSettingDescription:(id)arg1;

@end

