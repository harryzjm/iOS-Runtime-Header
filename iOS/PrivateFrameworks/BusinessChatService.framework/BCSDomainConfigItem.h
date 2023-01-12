//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface BCSDomainConfigItem
{
    long long _domainShardCount;
    long long _filterShardCount;
    NSURL *_domainMegaShardURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)keysRequestedForCloudKitFetch;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *domainMegaShardURL; // @synthesize domainMegaShardURL=_domainMegaShardURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 filterMegaShardURL:(id)arg4 itemTTL:(id)arg5;
- (long long)filterShardCount;
@property(readonly, nonatomic) long long domainShardCount;
- (id)initWithBuckets:(long long)arg1 domainShards:(long long)arg2 filterShards:(long long)arg3 expirationDate:(id)arg4 filterMegaShardURL:(id)arg5 domainMegaShardURL:(id)arg6 itemTTL:(id)arg7;
- (id)initWithBuckets:(long long)arg1 domainShards:(long long)arg2 filterShards:(long long)arg3 expirationDate:(id)arg4;
- (id)initWithRecord:(id)arg1;
- (id)initWithJSONObj:(id)arg1;

@end
