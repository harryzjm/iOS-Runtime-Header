//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkStore : NSObject
{
    const void *_ptr;
    unsigned long long _sz;
}

- (void)enumerateChunksUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChunksInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithBytes:(const void *)arg1 size:(unsigned long long)arg2;

@end

