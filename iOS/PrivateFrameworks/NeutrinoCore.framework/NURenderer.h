//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURenderer-Protocol.h>

@class CIContext, NSString;
@protocol OS_dispatch_queue;

@interface NURenderer : NSObject <NURenderer>
{
    NSObject<OS_dispatch_queue> *_queue;
    CIContext *_context;
}

+ (id)_renderContextOptionsWithOptions:(id)arg1;
+ (_Bool)allowClampToAlpha;
+ (_Bool)defaultUseHalfFloat;
+ (int)workingFormat;
+ (struct CGColorSpace *)workingColorSpace;
+ (id)defaultRenderContextOptions;
+ (id)rendererWithMetalDevice:(id)arg1 options:(id)arg2;
+ (id)rendererWithGLContext:(id)arg1 options:(id)arg2;
@property(readonly, nonatomic) CIContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)_renderImage:(id)arg1 toDestination:(id)arg2 bounds:(CDStruct_996ac03c)arg3 error:(out id *)arg4;
- (id)renderImage:(id)arg1 toDestination:(id)arg2 bounds:(CDStruct_996ac03c)arg3 error:(out id *)arg4;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithCIContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
