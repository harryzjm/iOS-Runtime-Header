//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRIFactorLevelCaching-Protocol.h>

@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching>
{
    _PASLock *_lock;
    _PASSimpleCoalescingTimer *_pruningTimer;
    double _pruningDelaySeconds;
}

- (void).cxx_destruct;
- (id)factorLevelCurrentlyCachedForFactorName:(id)arg1;
- (void)pruneSynchronously;
- (void)_populateCacheForRequiredKey:(id)arg1 guardedData:(id)arg2;
- (void)enumerateFactorLevelsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithPruningDelaySeconds:(double)arg1 loadFactorLevels:(CDUnknownBlockType)arg2;
- (id)init;

@end
