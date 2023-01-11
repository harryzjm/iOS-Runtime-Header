//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKOperationCallbacks-Protocol.h>

@class Protocol;
@protocol CKOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDOperationCallbackProxy : NSObject <CKOperationCallbacks>
{
    id <CKOperationCallbacks> _clientOperationCallbackProxy;
    Protocol *_callbackProtocol;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Protocol *callbackProtocol; // @synthesize callbackProtocol=_callbackProtocol;
@property(retain, nonatomic) id <CKOperationCallbacks> clientOperationCallbackProxy; // @synthesize clientOperationCallbackProxy=_clientOperationCallbackProxy;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithClientOperationCallbackProxy:(id)arg1 callbackProtocol:(id)arg2;

@end
