//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DCUsageAnalyticsReporter
{
}

+ (void)clearSharedCollector;
+ (id)sharedReporter;
- (void)logDocCamFilterUsageForFilterType:(short)arg1;
- (void)incrementCountForKey:(id)arg1 withSignature:(id)arg2;
- (void)incrementCountForKey:(id)arg1;

@end
