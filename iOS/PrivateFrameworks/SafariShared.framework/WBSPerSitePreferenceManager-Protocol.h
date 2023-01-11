//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, WBSPerSitePreference, WBSPerSitePreferenceTimeout;
@protocol WBSPerSitePreferenceManagerDelegate;

@protocol WBSPerSitePreferenceManager <NSObject>
@property(nonatomic) __weak id <WBSPerSitePreferenceManagerDelegate> delegate;
- (void)removePreferenceValuesForDomains:(NSSet *)arg1 fromPreference:(WBSPerSitePreference *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)getAllDomainsConfiguredForPreference:(WBSPerSitePreference *)arg1 usingBlock:(void (^)(NSSet *))arg2;
- (NSString *)localizedStringForValue:(id)arg1 inPreference:(WBSPerSitePreference *)arg2;
- (void)setDefaultValue:(id)arg1 ofPreference:(WBSPerSitePreference *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)getDefaultPreferenceValueForPreference:(WBSPerSitePreference *)arg1 completionHandler:(void (^)(id))arg2;
- (void)getValueOfPreference:(WBSPerSitePreference *)arg1 forDomain:(NSString *)arg2 withTimeout:(WBSPerSitePreferenceTimeout *)arg3 usingBlock:(void (^)(id, _Bool))arg4;
- (void)setValue:(id)arg1 ofPreference:(WBSPerSitePreference *)arg2 forDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (NSArray *)valuesForPreference:(WBSPerSitePreference *)arg1;
- (NSArray *)preferences;

@optional
- (_Bool)preferenceAppliesToHighLevelDomains:(WBSPerSitePreference *)arg1;
@end

