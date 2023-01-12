//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFHeartBeat : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_heartBeatTimer;
    NSObject<OS_dispatch_source> *_expirationTimer;
    CDUnknownBlockType _heartBeatHandler;
    CDUnknownBlockType _invalidationHandler;
    _Atomic unsigned long long _numberOfHeartBeats;
    NSString *_identifier;
    NSDate *_effectiveDate;
    double _expirationDuration;
    double _heartBeatInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double heartBeatInterval; // @synthesize heartBeatInterval=_heartBeatInterval;
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
@property(readonly, copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_invalidate;
- (void)_fire;
- (void)invalidate;
@property(readonly, nonatomic) unsigned long long numberOfHeartBeats;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 heartBeatInterval:(double)arg5 heartBeatHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
