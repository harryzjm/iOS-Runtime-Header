//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUGLFramebufferAttachable-Protocol.h>

@class NUPixelFormat;
@protocol EAGLDrawable;

@interface NUGLRenderbuffer <NUGLFramebufferAttachable>
{
    id <EAGLDrawable> _drawable;
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

@property(readonly, nonatomic) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)copyRect:(CDStruct_996ac03c)arg1 toBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)draw:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)flushDrawableWithContext:(id)arg1;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)delete;
- (void)generate:(id)arg1;
- (id)initWithDrawable:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)init;

@end
