//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString, QLThumbnailProvider;

__attribute__((visibility("hidden")))
@interface QLThumbnailServiceContext : NSExtensionContext
{
    QLThumbnailProvider *_thumbnailProvider;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(retain, nonatomic) QLThumbnailProvider *thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 contentType:(id)arg6 interpolationQuality:(int)arg7 wantsLowQuality:(_Bool)arg8 withFileURLHandler:(id)arg9 additionalResourcesWrapper:(id)arg10 generatorData:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)provideThumbnailForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 contentType:(id)arg6 interpolationQuality:(int)arg7 wantsLowQuality:(_Bool)arg8 withContents:(id)arg9 additionalResourcesWrapper:(id)arg10 generatorData:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (void)ioSurfaceForRequest:(id)arg1 withSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (id)protocolHostWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)protocolHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

