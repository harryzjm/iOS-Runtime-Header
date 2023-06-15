//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, PXGTextureProvider;
@protocol NSCopying, PXGDisplayAssetAdjustment;

@protocol PXGTextureProviderDelegate
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(PXGTextureProvider *)arg1;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(PXGTextureProvider *)arg1;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideFailureWithError:(NSError *)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePayload:(id <NSCopying>)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePixelBuffer:(struct __CVBuffer *)arg2 options:(CDStruct_906e517f)arg3 adjustment:(id <PXGDisplayAssetAdjustment>)arg4 forRequestID:(int)arg5;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideImageData:(NSData *)arg2 withSpecAtIndex:(long long)arg3 size:(struct CGSize)arg4 bytesPerRow:(unsigned long long)arg5 contentsRect:(struct CGRect)arg6 forRequestID:(int)arg7;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideCGImage:(struct CGImage *)arg2 options:(CDStruct_906e517f)arg3 adjustment:(id <PXGDisplayAssetAdjustment>)arg4 isDegraded:(_Bool)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideNothingForRequestID:(int)arg2;
@end

