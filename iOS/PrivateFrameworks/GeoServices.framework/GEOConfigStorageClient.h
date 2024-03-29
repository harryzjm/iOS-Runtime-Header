//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOConfigStorageClient : NSObject
{
}

+ (id)shared;
- (void)resync;
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(_Bool)arg4;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;
- (void)setConfigKeyExpiry:(id)arg1 options:(unsigned long long)arg2 date:(id)arg3 osVersion:(id)arg4;
- (void)getExpiringKeys:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;
- (id)getAllKeysAndValuesForOptions:(unsigned long long)arg1;
- (void)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 result:(CDUnknownBlockType)arg4;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

