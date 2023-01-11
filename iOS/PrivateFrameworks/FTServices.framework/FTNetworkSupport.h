//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTNetworkSupport : NSObject
{
    _Bool _enableCriticalReliability;
    _Bool _criticalReliabilityEnabledState;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableCriticalReliability;
- (void)_tryToEnableReliability;
- (void)_reallySetCriticalReliability:(_Bool)arg1;
- (void)_setReliabilityTimeoutInterval;
- (void)_clearReliabilityTimeoutInterval;
@property(readonly, nonatomic) _Bool networkReachable;
@property(readonly, nonatomic) _Bool networkActive;
@property(readonly, nonatomic) _Bool networkEnabled;
@property(readonly, nonatomic) _Bool dataActiveAndReachable;
- (_Bool)willSearchForNetworkForBundleId:(id)arg1;
@property(readonly, nonatomic) _Bool willSearchForNetwork;
@property(readonly, nonatomic) _Bool wiFiActiveAndReachable;
- (_Bool)validNetworkReachableForBundleId:(id)arg1;
@property(readonly, nonatomic) _Bool validNetworkReachable;
- (_Bool)validNetworkActiveForBundleId:(id)arg1;
@property(readonly, nonatomic) _Bool validNetworkActive;
- (_Bool)validNetworkEnabledForBundleId:(id)arg1;
@property(readonly, nonatomic) _Bool validNetworkEnabled;
@property(readonly, nonatomic) _Bool allowAnyNetwork;

@end
