//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(WBSPerSitePreference *)arg1;
- (long long)preferencesStoreKeyForPreference:(WBSPerSitePreference *)arg1;
@end

