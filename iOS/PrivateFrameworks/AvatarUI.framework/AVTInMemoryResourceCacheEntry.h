//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AVTCacheableResourceChangeToken, AVTCachedResource;

@interface AVTInMemoryResourceCacheEntry : NSObject
{
    id <AVTCachedResource> _resource;
    id <AVTCacheableResourceChangeToken> _changeToken;
    NSString *_key;
    unsigned long long _cost;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) id <AVTCacheableResourceChangeToken> changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) id <AVTCachedResource> resource; // @synthesize resource=_resource;
- (id)description;
- (void)dealloc;
- (id)initWithResource:(id)arg1 changeToken:(id)arg2 key:(id)arg3 cost:(unsigned long long)arg4;

@end
