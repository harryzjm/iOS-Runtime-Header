//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSBaseMessage, NSArray, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject
{
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    id <FTMessageQueueDelegate> _delegate;
}

@property __weak id <FTMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *_addDates; // @synthesize _addDates;
@property(retain) NSMutableArray *_queue; // @synthesize _queue;
- (void).cxx_destruct;
- (_Bool)removeMessage:(id)arg1;
- (_Bool)addMessageAtHeadOfQueue:(id)arg1;
- (_Bool)addMessage:(id)arg1;
- (id)dequeueTopMessage;
- (void)removeAllMessages;
- (void)_timeoutHit;
- (void)_setTimeout;
- (void)_clearTimeout;
@property(readonly) long long count;
@property(readonly) NSArray *messages;
@property(readonly) IDSBaseMessage *topMessage;
- (id)init;

@end

