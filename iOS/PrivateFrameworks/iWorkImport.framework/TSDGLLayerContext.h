//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDGLLayerContext-Protocol.h>

@class EAGLContext, NSString;

__attribute__((visibility("hidden")))
@interface TSDGLLayerContext : NSObject <TSDGLLayerContext>
{
    EAGLContext *_context;
    unsigned int _renderbuffer;
    unsigned int _framebuffer;
}

- (void)unlock;
- (void)lock;
- (void)presentRenderbuffer;
- (void)teardown;
- (_Bool)createFramebufferFromLayer:(id)arg1;
- (id)initWithSharedContext:(id)arg1;
- (id)init;
- (id)glContext;
- (_Bool)makeCurrentContext;
- (_Bool)isValid;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

