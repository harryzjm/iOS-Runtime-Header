//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SUUISettingsGroupDescription;
@protocol SUUISettingsGroupControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUISettingsGroupController : NSObject
{
    id <SUUISettingsGroupControllerDelegate> _delegate;
    NSMutableArray *_settingDescriptions;
    SUUISettingsGroupDescription *_settingsGroupDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUISettingsGroupDescription *settingsGroupDescription; // @synthesize settingsGroupDescription=_settingsGroupDescription;
@property(retain, nonatomic) NSMutableArray *settingDescriptions; // @synthesize settingDescriptions=_settingDescriptions;
@property(nonatomic) __weak id <SUUISettingsGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewForSettingDescription:(id)arg1;
- (void)_reloadSettingDescription:(id)arg1;
- (void)attachSettingDescription:(id)arg1;

@end

