//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSIntegerSet, BSMutableIntegerMap;

@interface STStatusDomainDataChangeRecord : NSObject
{
    BSMutableIntegerMap *_fallbackDataByClientKeyByDomain;
    BSMutableIntegerMap *_entriesByDomain;
    BSMutableIntegerMap *_cachedCurrentDataByDomain;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) BSMutableIntegerMap *cachedCurrentDataByDomain; // @synthesize cachedCurrentDataByDomain=_cachedCurrentDataByDomain;
@property(readonly, copy, nonatomic) BSMutableIntegerMap *entriesByDomain; // @synthesize entriesByDomain=_entriesByDomain;
@property(readonly, copy, nonatomic) BSMutableIntegerMap *fallbackDataByClientKeyByDomain; // @synthesize fallbackDataByClientKeyByDomain=_fallbackDataByClientKeyByDomain;
- (void)_combineTrailingDiffEntriesIfPossible:(id)arg1;
- (void)removeAllEntriesForClientKey:(id)arg1 domain:(unsigned long long)arg2;
- (void)addDiff:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (void)setData:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (void)setFallbackData:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (id)currentDataForDomain:(unsigned long long)arg1;
- (id)fallbackDataForClientKey:(id)arg1 domain:(unsigned long long)arg2;
@property(readonly, nonatomic) BSIntegerSet *domainsWithData;
- (id)init;

@end
