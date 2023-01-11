//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, WBSCloudBookmarksMigrationRampSettings;
@protocol OS_dispatch_queue;

@interface WBSCloudBookmarksMigrationRampEvaluator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_dateOfLastSettingsUpdate;
    _Bool _rampIncludesUserIdentity;
    WBSCloudBookmarksMigrationRampSettings *_settings;
    NSString *_userIdentity;
}

- (void).cxx_destruct;
- (_Bool)_isInternalBuild;
- (id)_macSafariNormalizedBundleVersion;
- (CDStruct_f6aba300)_operatingSystemVersion;
- (id)_operatingSystemFamily;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (_Bool)_evaluateRampIncludesOperatingSystemVersion;
- (_Bool)_evaluateRampIncludesUserIdentity;
@property(readonly, nonatomic) WBSCloudBookmarksMigrationRampSettings *settings;
@property(readonly, nonatomic) _Bool rampIncludesUserIdentity;
- (void)clearUserIdentity;
- (void)_didFetchSettingsDictionary:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSettingsIfNeeded:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateUserIdentityIfNeededWithFetcher:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateForced:(_Bool)arg1 withUserIdentityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initFromDictionaryRepresentation:(id)arg1;

@end

