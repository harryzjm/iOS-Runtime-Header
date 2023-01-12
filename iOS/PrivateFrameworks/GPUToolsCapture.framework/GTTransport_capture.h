//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTIntKeyedDictionary_capture, NSError, NSMutableSet, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GTTransport_capture : NSObject
{
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_rootQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sendQueue;
    struct atomic<unsigned int> _messageCounter;
    struct atomic<unsigned int> _messageSendQueueDepth;
    _Bool _invalid;
    _Bool _prioritizeOutgoingMessages;
    unsigned int _interposerVersion;
    NSMutableSet *_sources;
    GTIntKeyedDictionary_capture *_replyHandlersMap;
    NSError *_error;
    NSString *_identifier;
    CDUnknownFunctionPointerType _dispatch_send;
}

@property(nonatomic) unsigned int interposerVersion; // @synthesize interposerVersion=_interposerVersion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool prioritizeOutgoingMessages; // @synthesize prioritizeOutgoingMessages=_prioritizeOutgoingMessages;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)drainQueue;
- (_Bool)relayMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendNewMessage:(int)arg1 error:(id *)arg2;
- (_Bool)sendNewMessage:(int)arg1 error:(id *)arg2 replyQueue:(id)arg3 timeout:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)send:(id)arg1 error:(id *)arg2;
- (_Bool)send:(id)arg1 error:(id *)arg2 replyQueue:(id)arg3 timeout:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id *)arg3;
- (_Bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id *)arg3 replyQueue:(id)arg4 timeout:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;
@property(nonatomic) _Bool synchronous;
@property(readonly, nonatomic) _Bool invalid;
- (void)_scheduleInvalidation:(id)arg1;
- (void)invalidate;
- (long long)_sendMessage:(id)arg1 error:(id *)arg2;
- (_Bool)_packMessage:(id)arg1 error:(id *)arg2;
- (unsigned int)_nextMessageSerial;
- (void)_dispatchMessage:(id)arg1;
- (void)_handleReplyTimeout:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_invalidate;
@property(readonly, nonatomic) _Bool connected;
- (id)connect;
- (void)_cancelSource:(id)arg1;
- (_Bool)_activateSource:(id)arg1;
- (id)newSourceWithQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
@property(readonly, retain, nonatomic) NSURL *url;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end

