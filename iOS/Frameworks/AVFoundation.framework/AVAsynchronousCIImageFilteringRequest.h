//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying>
{
    AVAsynchronousCIImageFilteringRequestInternal *_internal;
}

- (void)finishWithError:(id)arg1;
- (void)finishWithImage:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 compositionTime;
@property(readonly, nonatomic) CIImage *sourceImage;
@property(readonly, nonatomic) struct CGSize renderSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_willDeallocOrFinalize;
- (id)initUsingCompositingRequest:(id)arg1 sourceFrame:(struct __CVBuffer *)arg2 cancellationTest:(CDUnknownBlockType)arg3 defaultCIContextProvider:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

