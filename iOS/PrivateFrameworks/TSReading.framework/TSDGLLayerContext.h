//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSDGLLayerContext-Protocol.h>

@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext>
{
    EAGLContext *mContext;
    unsigned int mRenderbuffer;
    unsigned int mFramebuffer;
}

- (void)unlock;
- (void)lock;
- (void)presentRenderbuffer;
- (void)teardown;
- (_Bool)createFramebufferFromLayer:(id)arg1;
- (id)init;
- (_Bool)makeCurrentContext;
- (_Bool)isValid;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

