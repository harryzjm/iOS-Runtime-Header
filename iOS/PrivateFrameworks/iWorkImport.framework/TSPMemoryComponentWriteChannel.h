//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSString, TSUDispatchData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_streamQueue;
    TSUDispatchData *_streamData;
    _Bool _isClosed;
}

- (void).cxx_destruct;
- (id)serializedData;
- (void)_close;
- (void)close;
- (void)writeData:(id)arg1;
- (id)init;
- (id)initWithAlwaysDefragmentData:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

