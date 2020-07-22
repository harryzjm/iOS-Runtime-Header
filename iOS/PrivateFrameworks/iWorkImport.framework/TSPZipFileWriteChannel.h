//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUStreamWriteChannel-Protocol.h>

@class NSString, TSUZipFileWriter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    NSObject<OS_dispatch_queue> *_writerQueue;
    _Bool _isClosed;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithArchiveWriter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

