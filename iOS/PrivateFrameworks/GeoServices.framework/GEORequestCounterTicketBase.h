//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEORequestCounterTicket-Protocol.h>

@class NSString, NSURLSessionTask;
@protocol OS_nw_activity;

@interface GEORequestCounterTicketBase : NSObject <GEORequestCounterTicket>
{
    NSString *_appId;
    CDStruct_d1a7ebee _type;
    _Bool _logNetworkActivityOnly;
    _Bool _complete;
    double _start;
    double _end;
    long long _subTaskXmitBytes;
    long long _subTaskRecvBytes;
    unsigned long long _subTaskUsedInterfaces;
    GEORequestCounterTicketBase *_parentTask;
    unsigned char _subTaskResult;
    unsigned char _subtasks;
    NSURLSessionTask *_task;
    NSObject<OS_nw_activity> *_nwActivity;
    unsigned long long _signpostId;
}

+ (id)requestCounterTicketForType:(CDStruct_d1a7ebee)arg1 appId:(id)arg2;
+ (id)_requestCounterTicketForType:(CDStruct_d1a7ebee)arg1 appId:(id)arg2 withParent:(id)arg3 logNetworkActivityOnly:(_Bool)arg4;
- (void).cxx_destruct;
- (void)_incrementForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 requestType:(CDStruct_d1a7ebee)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 usedInterfaces:(unsigned long long)arg8;
@property(readonly, copy) NSString *description;
- (void)requestCompletedWithResult:(unsigned char)arg1;
- (void)requestCompletedWithError:(id)arg1;
- (void)_subTask:(id)arg1 completed:(unsigned char)arg2 started:(double)arg3 finished:(double)arg4 xmitBytes:(long long)arg5 recvBytes:(long long)arg6 usedInterfaces:(unsigned long long)arg7;
- (void)startingRequestWithTask:(id)arg1;
- (id)createSubtask:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
