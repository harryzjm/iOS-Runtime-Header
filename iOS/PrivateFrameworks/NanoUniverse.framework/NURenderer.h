//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAGLContext, EAGLSharegroup, NSBundle;

@interface NURenderer : NSObject
{
    EAGLContext *_context;
    EAGLSharegroup *_shareGroup;
    NSBundle *_bundle;
    struct NURendererResources _resources;
    unsigned int _initalizedProgams:1;
    unsigned int _initalizedHemi:1;
    unsigned int _initalizedTextures:1;
    unsigned int _initalized:1;
}

+ (void)prime;
+ (void)_deallocInstance;
+ (id)sharedInstance;
@property(readonly, nonatomic) EAGLSharegroup *shareGroup; // @synthesize shareGroup=_shareGroup;
- (void).cxx_destruct;
- (void)_prime;
- (void)_purge;
- (void)purge;
- (void)_asyncDeallocInstance;
- (_Bool)_initTextures;
- (void)_loadTexture:(unsigned long long)arg1;
- (void)_requireTexture:(unsigned long long)arg1 sync:(_Bool)arg2;
- (_Bool)_initPrograms;
- (id)snapshot:(id)arg1 size:(struct CGSize)arg2;
- (void)_renderWithScene:(id)arg1 viewport:(struct NUViewport)arg2 prime:(_Bool)arg3;
- (void)renderWithScene:(id)arg1 viewport:(struct NUViewport)arg2;
- (unsigned int)createVertexArray;
- (_Bool)_initHemi;
- (void)dealloc;
- (id)init;

@end

