//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RTDataProtectionManager, RTStarkManager;
@protocol OS_dispatch_queue, RTNextPredictedLocationsOfInterestCacheDelegate;

@interface RTNextPredictedLocationsOfInterestCache : NSObject
{
    _Bool _enabled;
    id <RTNextPredictedLocationsOfInterestCacheDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_nextPredictedLocationsOfInterest;
    RTDataProtectionManager *_dataProtectionManager;
    RTStarkManager *_starkManager;
}

+ (id)cachePath;
@property(retain, nonatomic) RTStarkManager *starkManager; // @synthesize starkManager=_starkManager;
@property(retain, nonatomic) RTDataProtectionManager *dataProtectionManager; // @synthesize dataProtectionManager=_dataProtectionManager;
@property(retain, nonatomic) NSArray *nextPredictedLocationsOfInterest; // @synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <RTNextPredictedLocationsOfInterestCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)handleStarkTrustedConnectionEstablished:(_Bool)arg1;
- (void)onStarkNotification:(id)arg1;
- (void)handleUnlockedSinceBoot:(_Bool)arg1;
- (void)onDataProtectionNotification:(id)arg1;
- (void)purge;
- (void)clear;
- (id)getCachedNextPredictedLocationsOfInterest;
- (void)cacheNextPredictedLocationsOfInterest:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 dataProtectionManager:(id)arg2 starkManager:(id)arg3;
- (id)init;

@end

