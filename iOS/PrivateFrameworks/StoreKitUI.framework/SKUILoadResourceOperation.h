//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSLock, SKUIClientContext, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    SKUIResourceRequest *_request;
    long long __loadReason;
}

@property(nonatomic, setter=_setLoadReason:) long long _loadReason; // @synthesize _loadReason=__loadReason;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
@property(retain) SKUIClientContext *clientContext;
@property(readonly, copy) SKUIResourceRequest *resourceRequest;
- (id)initWithResourceRequest:(id)arg1;
- (id)init;
- (id)_initSKUILoadResourceOperation;

@end

