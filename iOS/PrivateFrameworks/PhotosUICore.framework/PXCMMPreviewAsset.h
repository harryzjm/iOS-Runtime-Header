//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSData, NSDate, NSString, PHAsset, PHMomentShare, UIImage;

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset>
{
    UIImage *_cachedImage;
    PHMomentShare *_momentShare;
    PHAsset *_underlyingAsset;
}

@property(readonly, nonatomic) PHAsset *underlyingAsset; // @synthesize underlyingAsset=_underlyingAsset;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (void).cxx_destruct;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
@property(readonly, nonatomic) double aspectRatio;
- (struct CGSize)size;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) NSData *previewImageData;
@property(readonly, nonatomic) _Bool isPreviewImageDataAvailable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)init;
- (id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly) Class superclass;

@end
