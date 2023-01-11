//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKProximityAdvertiser : NSObject
{
    SFService *_nearbyInfoSharingService;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_advertiserQueue;
    _Bool _isAdvertising;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
- (void)endAdvertising;
- (void)_queue_endAdvertising;
- (CDUnknownBlockType)_createAdvertisingActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startAdvertisingForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
