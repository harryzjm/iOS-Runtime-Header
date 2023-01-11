//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUReadChannel-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPMemoryReadChannel : NSObject <TSUReadChannel>
{
    NSObject<OS_dispatch_data> *_dispatchData;
    NSObject<OS_dispatch_queue> *_readQueue;
}

- (void).cxx_destruct;
- (void)_close;
- (void)close;
@property(readonly, nonatomic) _Bool isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithNSData:(id)arg1;
- (id)initWithDispatchData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

