//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REForcedRelevanceProviderManager
{
}

+ (_Bool)_supportsHistoricProviders;
+ (_Bool)_wantsSeperateRelevanceQueue;
+ (id)_features;
+ (Class)_relevanceProviderClass;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;

@end
