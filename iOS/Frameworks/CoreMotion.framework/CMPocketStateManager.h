//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CMPocketStateDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CMPocketStateManager : NSObject
{
    NSObject<OS_dispatch_source> *fQueryTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fCachedState;
    struct Dispatcher *fDispatcher;
    double fMaxMonitorTime;
    NSMutableArray *fQueryBlocks;
    id <CMPocketStateDelegate> _delegate;
}

+ (_Bool)isPocketStateAvailable;
@property(nonatomic) id <CMPocketStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPocketStateUpdated:(int)arg1;
- (void)onNotification:(id)arg1;
- (void)queryStateOntoQueue:(id)arg1 andMonitorFor:(double)arg2 withTimeout:(double)arg3 andHandler:(CDUnknownBlockType)arg4;
- (void)queryStateOntoQueue:(id)arg1 withTimeout:(double)arg2 andHandler:(CDUnknownBlockType)arg3;
- (void)addToAggdScalarWithName:(id)arg1 andScalar:(unsigned long long)arg2;
- (id)externalStateToString:(long long)arg1;
- (long long)translateInternalState:(int)arg1;
- (void)_disableDispatcher;
- (void)dealloc;
- (id)init;

@end

