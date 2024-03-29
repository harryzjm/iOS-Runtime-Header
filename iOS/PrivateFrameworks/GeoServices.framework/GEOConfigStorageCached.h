//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol GEOConfigStorageReadOnly;

__attribute__((visibility("hidden")))
@interface GEOConfigStorageCached : NSObject
{
    long long _source;
    unsigned long long _options;
    struct os_unfair_recursive_lock_s _cacheLock;
    struct atomic_flag _isResyncing;
    NSDictionary *_cachedValues;
    id <GEOConfigStorageReadOnly> _direct;
}

- (void).cxx_destruct;
- (void)resync;
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(_Bool)arg4;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;
- (id)initForSource:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

