//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class IMMessageContext, IMRemoteObjectBroadcaster, NSArray, NSString, Protocol;

@interface Broadcaster : NSProxy
{
    NSArray *_targets;
    IMRemoteObjectBroadcaster *_parent;
    Protocol *_protocol;
    IMMessageContext *_messageContext;
    int _curXPCMessagePriority;
    CDUnknownBlockType _completion;
}

@property(nonatomic) int curXPCMessagePriority; // @synthesize curXPCMessagePriority=_curXPCMessagePriority;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendXPCObject:(id)arg1;
- (void)dealloc;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

