//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@class NSString, SFUDataRepresentation;
@protocol OS_dispatch_queue, SFUInputStream;

__attribute__((visibility("hidden")))
@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel>
{
    SFUDataRepresentation *_representation;
    id <SFUInputStream> _inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
}

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

