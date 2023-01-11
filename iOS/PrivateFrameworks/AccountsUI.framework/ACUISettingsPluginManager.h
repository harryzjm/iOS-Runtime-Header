//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PSViewController;
@protocol ACUISettingsPluginParentProtocol;

@interface ACUISettingsPluginManager : NSObject
{
    PSViewController<ACUISettingsPluginParentProtocol> *_parentViewController;
    NSMutableDictionary *_pluginCache;
}

- (void).cxx_destruct;
- (id)_loadSettingsPluginFromBundleWithName:(id)arg1;
- (id)_settingsPluginFromBundleWithName:(id)arg1;
- (id)contactsSettingsPlugin;
- (id)calendarSettingsPlugin;
- (id)mailSettingsPlugin;
- (void)parentViewControllerWillDisappear;
- (id)initWithParentViewController:(id)arg1;

@end
