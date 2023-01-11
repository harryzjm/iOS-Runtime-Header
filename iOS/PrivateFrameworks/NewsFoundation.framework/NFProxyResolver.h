//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFResolver-Protocol.h>
#import <NewsFoundation/NFValidationResolver-Protocol.h>

@class NFCallbackStore, NFContainerPool, NFContext, NSString;
@protocol NFDefinitionContainer;

__attribute__((visibility("hidden")))
@interface NFProxyResolver : NSObject <NFResolver, NFValidationResolver>
{
    id <NFDefinitionContainer> _publicContainer;
    id <NFDefinitionContainer> _privateContainer;
    NFContainerPool *_pool;
    NFCallbackStore *_callbackStore;
    NFContext *_context;
}

@property(retain, nonatomic) NFContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NFCallbackStore *callbackStore; // @synthesize callbackStore=_callbackStore;
@property(retain, nonatomic) NFContainerPool *pool; // @synthesize pool=_pool;
@property(retain, nonatomic) id <NFDefinitionContainer> privateContainer; // @synthesize privateContainer=_privateContainer;
@property(retain, nonatomic) id <NFDefinitionContainer> publicContainer; // @synthesize publicContainer=_publicContainer;
- (void).cxx_destruct;
- (id)contextWithContextBlock:(CDUnknownBlockType)arg1;
- (void)ensure:(id)arg1 name:(id)arg2;
- (id)resolve:(id)arg1 name:(id)arg2 context:(id)arg3 validateBlock:(CDUnknownBlockType)arg4;
- (void)ensureProtocol:(id)arg1 name:(id)arg2;
- (void)ensureProtocol:(id)arg1;
- (void)ensureClass:(Class)arg1 name:(id)arg2;
- (void)ensureClass:(Class)arg1;
- (id)unsafeResolveForKey:(id)arg1 name:(id)arg2 context:(id)arg3;
- (id)unsafeResolveForKey:(id)arg1 name:(id)arg2;
- (id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;
- (id)resolveProtocol:(id)arg1 name:(id)arg2;
- (id)resolveProtocol:(id)arg1 contextBlock:(CDUnknownBlockType)arg2;
- (id)resolveProtocol:(id)arg1;
- (id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;
- (id)resolveClass:(Class)arg1 name:(id)arg2;
- (id)resolveClass:(Class)arg1 contextBlock:(CDUnknownBlockType)arg2;
- (id)resolveClass:(Class)arg1;
- (void)linkResolverWithLinkBlock:(CDUnknownBlockType)arg1;
- (id)currentObjectGraphResolver:(unsigned long long)arg1;
- (id)createProxyResolverForPrivateContainer:(id)arg1;
- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 inPool:(id)arg3 callbackStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

