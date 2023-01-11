//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Protocol;

@interface CKWeakObjectCallbackProxy : NSObject
{
    _Bool _hadObject;
    id _weakObject;
    Protocol *_callbackProtocol;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hadObject; // @synthesize hadObject=_hadObject;
@property(retain, nonatomic) Protocol *callbackProtocol; // @synthesize callbackProtocol=_callbackProtocol;
@property(nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithWeakObject:(id)arg1 callbackProtocol:(id)arg2;

@end
