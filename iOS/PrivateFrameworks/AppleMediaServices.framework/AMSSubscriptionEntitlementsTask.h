//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AMSSubscriptionEntitlementsTask
{
    _Bool _extendedCarrierCheck;
    long long _cachePolicy;
    long long _mediaType;
}

+ (unsigned long long)_segmentForMediaType:(long long)arg1 error:(id *)arg2;
+ (id)updateCacheForMediaType:(long long)arg1 account:(id)arg2 data:(id)arg3;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool extendedCarrierCheck; // @synthesize extendedCarrierCheck=_extendedCarrierCheck;
@property(nonatomic) long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (_Bool)_shouldIgnoreRemoteData;
- (_Bool)_shouldIgnoreCaches;
- (id)_resultFromICResponse:(id)arg1;
- (id)_resultFromASDEntitlements:(id)arg1;
- (id)_reloadASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2;
- (id)_queryCachedASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2 reloadIfNeeded:(_Bool)arg3;
- (id)_fetchEntitlementsFromIC;
- (id)_fetchEntitlementsFromASD;
- (id)performExternalLookup;
- (id)initWithMediaType:(long long)arg1;

@end
