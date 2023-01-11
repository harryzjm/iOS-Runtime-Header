//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXGChangeDetails, PXGLayout, PXGSpriteDataStore, PXGSpriteMetadataStore;
@protocol PXGRendererDelegate, PXGTextureConverter;

@protocol PXGRenderer <NSObject>
@property(readonly, nonatomic) id <PXGTextureConverter> textureConverter;
@property(readonly, nonatomic) int presentationType;
@property(nonatomic) CDStruct_a02a4563 interactionState;
@property(nonatomic) struct CGRect visibleRect;
@property(nonatomic) __weak id <PXGRendererDelegate> delegate;
- (void)releaseResources;
- (void)renderSpritesWithTextures:(NSArray *)arg1 dataStore:(PXGSpriteDataStore *)arg2 presentationDataStore:(PXGSpriteDataStore *)arg3 presentationMetadataStore:(PXGSpriteMetadataStore *)arg4 layout:(PXGLayout *)arg5;
- (void)updateWithChangeDetails:(PXGChangeDetails *)arg1;
- (void)setNeedsRender;

@optional
@property(copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler;
@end
