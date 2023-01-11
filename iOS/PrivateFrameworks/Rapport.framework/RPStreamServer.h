//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPStreamServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    id _selfRef;
    NSMutableDictionary *_streamSessions;
    unsigned int _streamFlags;
    CDUnknownBlockType _invalidationHandler;
    id <RPMessageable> _messenger;
    CDUnknownBlockType _streamAcceptHandler;
    CDUnknownBlockType _streamPrepareHandlerEx;
    CDUnknownBlockType _streamPrepareHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType streamPrepareHandler; // @synthesize streamPrepareHandler=_streamPrepareHandler;
@property(copy, nonatomic) CDUnknownBlockType streamPrepareHandlerEx; // @synthesize streamPrepareHandlerEx=_streamPrepareHandlerEx;
@property(nonatomic) unsigned int streamFlags; // @synthesize streamFlags=_streamFlags;
@property(copy, nonatomic) CDUnknownBlockType streamAcceptHandler; // @synthesize streamAcceptHandler=_streamAcceptHandler;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
