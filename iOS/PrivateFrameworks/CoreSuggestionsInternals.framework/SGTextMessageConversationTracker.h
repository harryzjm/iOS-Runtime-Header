//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGLRUCache;

@interface SGTextMessageConversationTracker : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    SGLRUCache *_conversations;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)clear;
- (id)addMessage:(id)arg1;
- (id)init;

@end
