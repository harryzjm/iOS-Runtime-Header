//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MCMResultPromise, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMReply : NSObject
{
    _Bool _replySent;
    _Bool _exitAfterSend;
    NSObject<OS_xpc_object> *_xpcReply;
    NSObject<OS_dispatch_queue> *_slowWorkloop;
    NSObject<OS_dispatch_queue> *_fastWorkloop;
    id <MCMResultPromise> _resultPromise;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MCMResultPromise> resultPromise; // @synthesize resultPromise=_resultPromise;
@property(nonatomic) _Bool exitAfterSend; // @synthesize exitAfterSend=_exitAfterSend;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fastWorkloop; // @synthesize fastWorkloop=_fastWorkloop;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *slowWorkloop; // @synthesize slowWorkloop=_slowWorkloop;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply; // @synthesize xpcReply=_xpcReply;
- (void)_send;
- (void)dispatchSyncToFastWorkloopWithBlock:(CDUnknownBlockType)arg1;
- (void)encodeResult:(id)arg1;
- (void)handoffToSlowWorkloopforClientIdentity:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)send;
- (void)invalidate;
- (id)initWithXpcReply:(id)arg1 slowWorkloop:(id)arg2 fastWorkloop:(id)arg3 resultPromise:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

