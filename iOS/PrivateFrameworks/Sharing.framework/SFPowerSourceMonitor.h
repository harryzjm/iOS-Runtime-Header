//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SFPowerSourceMonitor : NSObject
{
    _Bool _activateCalled;
    CUCoalescer *_updateCoalescer;
    NSMutableDictionary *_aggregateSources;
    NSMutableDictionary *_pendingAddedAggregates;
    NSMutableDictionary *_pendingChangedAggregates;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _powerSourceFoundHandler;
    CDUnknownBlockType _powerSourceLostHandler;
    CDUnknownBlockType _powerSourceChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType powerSourceChangedHandler; // @synthesize powerSourceChangedHandler=_powerSourceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType powerSourceLostHandler; // @synthesize powerSourceLostHandler=_powerSourceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType powerSourceFoundHandler; // @synthesize powerSourceFoundHandler=_powerSourceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void).cxx_destruct;
- (void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2;
- (void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_updatePowerSources;
- (void)_triggerUpdatePowerSources;
- (void)_update;
- (void)_aggregatePowerSourceUpdate:(id)arg1 desc:(id)arg2;
- (void)_aggregatePowerSourceComponentLost:(id)arg1;
- (void)_aggregatePowerSourceComponentFound:(id)arg1;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

