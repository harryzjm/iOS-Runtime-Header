//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _COMessagingServiceMeter : NSObject
{
    struct os_unfair_lock_s _lock;
    int _registration;
    NSDictionary *_limits;
    NSMutableDictionary *_peaks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int registration; // @synthesize registration=_registration;
@property(readonly, nonatomic) NSMutableDictionary *peaks; // @synthesize peaks=_peaks;
@property(readonly, copy, nonatomic) NSDictionary *limits; // @synthesize limits=_limits;
- (unsigned long long)receiveLimitForIdentifier:(id)arg1;
- (unsigned long long)sendLimitForIdentifier:(id)arg1;
- (_Bool)isEvaluatingIdentifier:(id)arg1;
- (_Bool)clientIdentifier:(id)arg1 canReceiveLength:(unsigned long long)arg2;
- (_Bool)clientIdentifier:(id)arg1 canSendLength:(unsigned long long)arg2;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

