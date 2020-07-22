//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject
{
    NSString *_singleDeviceSaveChangesThrottlingPolicyString;
    NSString *_multipleDeviceSaveChangesThrottlingPolicyString;
    NSString *_singleDeviceFetchChangesThrottlingPolicyString;
    NSString *_multipleDeviceFetchChangesThrottlingPolicyString;
    NSString *_syncCircleSizeRetrievalThrottlingPolicyString;
    unsigned long long _maximumRequestCharacterCount;
    double _syncWindow;
}

@property double syncWindow; // @synthesize syncWindow=_syncWindow;
@property unsigned long long maximumRequestCharacterCount; // @synthesize maximumRequestCharacterCount=_maximumRequestCharacterCount;
@property(retain) NSString *syncCircleSizeRetrievalThrottlingPolicyString; // @synthesize syncCircleSizeRetrievalThrottlingPolicyString=_syncCircleSizeRetrievalThrottlingPolicyString;
@property(retain) NSString *multipleDeviceFetchChangesThrottlingPolicyString; // @synthesize multipleDeviceFetchChangesThrottlingPolicyString=_multipleDeviceFetchChangesThrottlingPolicyString;
@property(retain) NSString *singleDeviceFetchChangesThrottlingPolicyString; // @synthesize singleDeviceFetchChangesThrottlingPolicyString=_singleDeviceFetchChangesThrottlingPolicyString;
@property(retain) NSString *multipleDeviceSaveChangesThrottlingPolicyString; // @synthesize multipleDeviceSaveChangesThrottlingPolicyString=_multipleDeviceSaveChangesThrottlingPolicyString;
@property(retain) NSString *singleDeviceSaveChangesThrottlingPolicyString; // @synthesize singleDeviceSaveChangesThrottlingPolicyString=_singleDeviceSaveChangesThrottlingPolicyString;
- (void).cxx_destruct;
@property(readonly) _Bool shouldUseLongLivedOperationsToSaveRecords;
@property(readonly) _Bool shouldBatchSaveRecords;
- (void)applyRemoteConfiguration:(id)arg1;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (id)remoteConfiguration;
- (id)platformBuiltInConfiguration;
- (id)_sharedBuiltInConfiguration;
- (void)_applyConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (void)_applyBuiltInConfiguration:(id)arg1;
- (id)_builtInConfiguration;
- (id)init;

@end

