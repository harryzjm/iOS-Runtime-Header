//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, _PASBloomFilter;

__attribute__((visibility("hidden")))
@interface BCSFilterShardItem
{
    _PASBloomFilter *_bloomFilter;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _PASBloomFilter *bloomFilter; // @synthesize bloomFilter=_bloomFilter;
- (_Bool)containsItemMatching:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy) NSString *description;
- (id)initWithBloomFilter:(id)arg1 bloomFilterString:(id)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 type:(long long)arg5 expirationDate:(id)arg6;
- (id)initWithBloomFilterString:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 type:(long long)arg4 expirationDate:(id)arg5;
- (id)initWithBusinessCallerShardItem:(id)arg1;
- (id)initWithChatSuggestShardItem:(id)arg1;
- (id)initWithBusinessLinkShardItem:(id)arg1;
- (id)initWithURL:(id)arg1 type:(long long)arg2;
- (id)initWithRecord:(id)arg1 type:(long long)arg2;
- (id)initWithJSONObj:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *base64EncodedString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long shardCount;
@property(readonly, nonatomic) long long startIndex;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end

