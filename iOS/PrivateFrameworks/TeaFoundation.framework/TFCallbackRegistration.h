//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TeaFoundation/TFCallbackRegistration-Protocol.h>

@class NSString, TFCallbackStore;
@protocol TFDefinitionContainer;

@interface TFCallbackRegistration : NSObject <TFCallbackRegistration>
{
    TFCallbackStore *_callbackStore;
    id <TFDefinitionContainer> _privateContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFDefinitionContainer> privateContainer; // @synthesize privateContainer=_privateContainer;
@property(readonly, nonatomic) TFCallbackStore *callbackStore; // @synthesize callbackStore=_callbackStore;
- (void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)initWithCallbackStore:(id)arg1 privateContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
