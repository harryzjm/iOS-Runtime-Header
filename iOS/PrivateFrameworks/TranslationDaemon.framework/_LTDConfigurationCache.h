//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LTDConfigurationCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_conditions;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_errorForType:(long long)arg1 reason:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForType:(long long)arg1;
- (void)objectForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)objectForType:(long long)arg1 error:(id *)arg2;
- (void)setObject:(id)arg1 forType:(long long)arg2 ttl:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

