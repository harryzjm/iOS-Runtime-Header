//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSString, NSUUID;
@protocol HMMRTCReportingFactory;

__attribute__((visibility("hidden")))
@interface HMMQueuingRTCBackendOperation : NSOperation
{
    struct os_unfair_lock_s _lock;
    long long _operationState;
    _Bool _isRealtime;
    NSArray *_messages;
    NSString *_serviceName;
    NSUUID *_sessionUUID;
    id <HMMRTCReportingFactory> _rtcFactory;
    CDUnknownBlockType _staleSessionBlock;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType staleSessionBlock; // @synthesize staleSessionBlock=_staleSessionBlock;
@property(readonly, nonatomic) id <HMMRTCReportingFactory> rtcFactory; // @synthesize rtcFactory=_rtcFactory;
@property(readonly, nonatomic) _Bool isRealtime; // @synthesize isRealtime=_isRealtime;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)changeOperationState:(long long)arg1;
- (void)start;
- (id)initWithMessages:(id)arg1 serviceName:(id)arg2 sessionUUID:(id)arg3 isRealtime:(_Bool)arg4 rtcFactory:(id)arg5 staleSessionBlock:(CDUnknownBlockType)arg6;

@end

