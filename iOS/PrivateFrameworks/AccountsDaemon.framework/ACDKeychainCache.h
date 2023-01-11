//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ACDKeychainCache : NSObject
{
    struct os_unfair_lock_s _cachesLock;
    struct os_unfair_lock_s _expirersLock;
    unsigned int _cacheValidityDuration;
    NSDictionary *_cachesByUsername;
    NSMutableDictionary *_expirersByUsername;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *expirersByUsername; // @synthesize expirersByUsername=_expirersByUsername;
@property(retain) NSDictionary *cachesByUsername; // @synthesize cachesByUsername=_cachesByUsername;
@property unsigned int cacheValidityDuration; // @synthesize cacheValidityDuration=_cacheValidityDuration;
- (void)clearCache;
- (void)clearDataForService:(id)arg1 username:(id)arg2;
- (id)dataForService:(id)arg1 username:(id)arg2;
- (void)cacheData:(id)arg1 forService:(id)arg2 username:(id)arg3;
- (id)initWithValidityDuration:(unsigned int)arg1;

@end
