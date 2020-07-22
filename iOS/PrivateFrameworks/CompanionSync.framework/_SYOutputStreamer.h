//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CompanionSync/NSStreamDelegate-Protocol.h>
#import <CompanionSync/_SYStreamPropertyProxying-Protocol.h>

@class NSMutableArray, NSString, SYCompressedFileOutputStream;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _SYOutputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying>
{
    SYCompressedFileOutputStream *_stream;
    NSMutableArray *_items;
    CDUnknownBlockType _onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _hasWrittenData;
}

@property(readonly, nonatomic) _Bool hasWrittenData; // @synthesize hasWrittenData=_hasWrittenData;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamPropertyForKey:(id)arg1;
- (void)setStreamProperty:(id)arg1 forKey:(id)arg2;
- (void)close;
- (void)whenComplete:(CDUnknownBlockType)arg1;
- (void)_completeAllItemsWithError:(id)arg1;
- (void)_tryToSendData;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_getCompletionBlock;
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

