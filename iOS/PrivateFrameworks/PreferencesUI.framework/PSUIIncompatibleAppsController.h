//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray;

@interface PSUIIncompatibleAppsController : PSListController
{
    NSArray *_updates;
}

+ (_Bool)proxyWillBeDeprecatedFor32Bit:(id)arg1;
+ (id)incompatible3rdPartyAppProxies;
@property(retain, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (void).cxx_destruct;
- (void)refreshAvailableSoftwareUpdates;
- (_Bool)updateIsAvailableForBundleID:(id)arg1;
- (void)openStoreForSpecifier:(id)arg1;
- (id)specifiers;
- (void)handleAppsChangedNotification;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

