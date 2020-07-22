//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPContext;
@protocol CDPLocalDeviceSecretHandlerProtocol;

@interface CDPLocalDeviceSecretHandler : NSObject
{
    id <CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
    CDPContext *_context;
}

@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 handler:(id)arg2;

@end

