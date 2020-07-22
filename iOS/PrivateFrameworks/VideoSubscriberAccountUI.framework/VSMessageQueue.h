//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol VSMessageQueueDelegate;

__attribute__((visibility("hidden")))
@interface VSMessageQueue : NSObject
{
    id <VSMessageQueueDelegate> _delegate;
    NSMutableArray *_messages;
}

@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak id <VSMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)removeAllMessages;
- (void)addMessage:(id)arg1;
- (id)init;

@end
