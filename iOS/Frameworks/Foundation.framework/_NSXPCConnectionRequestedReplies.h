//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionRequestedReplies : NSObject
{
    struct __CFDictionary *_replyDictionaryTable;
    struct __CFDictionary *_replyTransactionTable;
    struct __CFDictionary *_progressTable;
    struct os_unfair_lock_s _lock;
    unsigned char _invalid;
}

- (void)dealloc;
- (id)init;

@end

