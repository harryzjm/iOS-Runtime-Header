//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/RESessionRelevanceProviderManagerProperties-Protocol.h>

@class NSDate, NSString;

@interface RESessionRelevanceProviderManager <RESessionRelevanceProviderManagerProperties>
{
    NSDate *_lastDateUpdate;
}

+ (_Bool)_supportsHistoricProviders;
+ (_Bool)_wantsSeperateRelevanceQueue;
+ (id)_features;
+ (Class)_relevanceProviderClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastUpdateDate;
- (void)_handleSignificantTimeChange;
- (void)pause;
- (void)resume;
- (void)_prepareForUpdate;
- (void)_scheduleUpdatesForSessionProvider:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
