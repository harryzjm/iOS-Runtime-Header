//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFCallbackRegistration-Protocol.h>

@class NFCallbackStore, NSString;
@protocol NFDefinitionContainer;

@interface NFCallbackRegistration : NSObject <NFCallbackRegistration>
{
    NFCallbackStore *_callbackStore;
    id <NFDefinitionContainer> _privateContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NFDefinitionContainer> privateContainer; // @synthesize privateContainer=_privateContainer;
@property(readonly, nonatomic) NFCallbackStore *callbackStore; // @synthesize callbackStore=_callbackStore;
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
