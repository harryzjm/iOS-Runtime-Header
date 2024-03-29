//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSTask.h"

@class ACAccount, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSSyncRestrictedRegionTask : AMSTask
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
}

+ (id)createSyncAccountFlagsTaskForAccount:(id)arg1 bag:(id)arg2;
+ (double)checkRestrictedRegionDurationValueFromBag:(id)arg1;
+ (_Bool)storefrontContainsRestrictedRegionsValueFromBag:(id)arg1;
+ (double)durationOfSyncRestrictedRegionValueFromBag:(id)arg1;
+ (_Bool)hasCachedRestrictedRegionsValueFromAccount:(id)arg1 cachedTimestamp:(double *)arg2;
+ (_Bool)didExceededSyncDuration:(double)arg1 lastTimestamp:(double)arg2 currentTimestamp:(double)arg3;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
- (void).cxx_destruct;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)cacheRestrictedRegionSyncTimestamp:(double)arg1;
- (id)performSync;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

