//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInputStream, NSString, NWURLSessionReadRequest;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NWURLSessionRequestBodyStream : NSObject
{
    _Bool _streamIsSetup;
    NSInputStream *_stream;
    unsigned long long _offset;
    long long _bytesSent;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionReadRequest *_readRequest;
}

- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)close;
- (void)readMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long countOfBytesSent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

