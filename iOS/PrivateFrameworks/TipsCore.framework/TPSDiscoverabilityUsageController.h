//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSortDescriptor, NSString, TPSDuetDataProvider;

@interface TPSDiscoverabilityUsageController : NSObject
{
    TPSDuetDataProvider *_duetProvider;
    NSString *_currentOSBuildVersion;
    NSString *_currentOSMajorVersion;
    NSSortDescriptor *_eventSortDescriptor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)_initWithDirectory:(id)arg1;
- (id)_discoverabilityStream;
- (id)_majorVersionForBuildVersion:(id)arg1;
- (id)_majorVersionFilterPredicate;
- (id)_eventsPredicateForContentID:(id)arg1 sinceDate:(id)arg2;
- (id)_lastOfferedDateFilterPredicate;
- (id)_metaDataForUsageEvent:(id)arg1;
- (id)firstEventMatchingUsageEventState:(long long)arg1 fromEvents:(id)arg2;
- (id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 fromEvents:(id)arg4;
- (id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 error:(id *)arg5;
- (void)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 error:(id *)arg3;
- (void)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addContentUsageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(_Bool *)arg4 error:(id *)arg5;
- (id)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(_Bool *)arg4 error:(id *)arg5;
- (id)init;

@end
