//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExpectedReplies : NSObject
{
    struct __CFDictionary *_replyTable;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _sequence;
}

- (id)progressForSequence:(unsigned long long)arg1;
- (void)removeProgressSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForProgress:(id)arg1;
- (void)dealloc;
- (id)init;

@end

