//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@class NSString, TSUBufferedReadChannel;

__attribute__((visibility("hidden")))
@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel>
{
    TSUBufferedReadChannel *_bufferedReadChannel;
}

- (void).cxx_destruct;
- (void)close;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBufferedReadChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

