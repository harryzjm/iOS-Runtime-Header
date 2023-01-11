//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface RBMeteredMessageQueue : NSObject
{
    NSMutableDictionary *_pendingMessagesByIdentifier;
    _Bool _isProcessingPendingMessages;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    CDUnknownBlockType _messageSendBlock;
}

@property(copy, nonatomic) CDUnknownBlockType messageSendBlock; // @synthesize messageSendBlock=_messageSendBlock;
- (void).cxx_destruct;
- (void)_lockQueue_processPendingMessages;
- (_Bool)containsMessageWithIdentifier:(id)arg1;
- (void)enqueueIdentifier:(id)arg1 message:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end
