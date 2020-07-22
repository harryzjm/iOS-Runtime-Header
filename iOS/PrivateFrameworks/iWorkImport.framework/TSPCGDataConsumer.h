//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue, TSUStreamWriteChannel;

__attribute__((visibility("hidden")))
@interface TSPCGDataConsumer : NSObject
{
    NSObject<OS_dispatch_queue> *_writeQueue;
    id <TSUStreamWriteChannel> _writeChannel;
    NSError *_error;
}

+ (struct CGDataConsumer *)newCGDataConsumerForWriteChannel:(id)arg1;
- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (unsigned long long)putBytes:(const void *)arg1 count:(unsigned long long)arg2;
- (id)initWithWriteChannel:(id)arg1;
- (id)init;

@end

