//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol BRCCiconiaStatusProvider, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFPFSMigrationScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_trialRefreshQueue;
    NSObject<OS_dispatch_source> *_trialRefreshSource;
    NSUserDefaults *_fpfsFeatureDefaults;
    id <BRCCiconiaStatusProvider> _ciconiaStatusProvider;
}

- (void).cxx_destruct;
- (void)fixFPFSFeatureFlagUserDefaults;
- (void)removeSchedule;
- (void)scheduleMigrationIfNeeded;
- (id)initWithCiconiaStatusProvider:(id)arg1;

@end

