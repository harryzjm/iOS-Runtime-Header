//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, TSPComponentWriteChannel;

@interface TSPSnappyComponentWriteChannel : NSObject
{
    NSObject<OS_dispatch_queue> *_writeQueue;
    char _uncompressedBuffer[65536];
    unsigned long long _uncompressedLength;
    id <TSPComponentWriteChannel> _writeChannel;
}

- (void).cxx_destruct;
- (void)close;
- (void)writeBlock;
- (void)writeData:(id)arg1;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

