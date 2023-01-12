//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAsset, PHFace, PXPeopleFaceCropFetchOptions;

@interface PXPeopleFaceCropRequest : NSObject
{
    _Bool _canceled;
    int _faceCropRequestID;
    int _imageManagerRequestID;
    PXPeopleFaceCropFetchOptions *_options;
    PHFace *_face;
    PHAsset *_asset;
    struct CGPoint _normalizedCenterEyeLine;
    struct CGRect _normalizedFaceCropRect;
    struct CGRect _normalizedEdgeAdjustedCropRect;
    struct CGRect _normalizedSmallFaceRect;
    struct CGRect _smallFaceRect;
}

+ (int)_generateUniqueRequestID;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) struct CGPoint normalizedCenterEyeLine; // @synthesize normalizedCenterEyeLine=_normalizedCenterEyeLine;
@property(nonatomic) struct CGRect smallFaceRect; // @synthesize smallFaceRect=_smallFaceRect;
@property(nonatomic) struct CGRect normalizedSmallFaceRect; // @synthesize normalizedSmallFaceRect=_normalizedSmallFaceRect;
@property(nonatomic) struct CGRect normalizedEdgeAdjustedCropRect; // @synthesize normalizedEdgeAdjustedCropRect=_normalizedEdgeAdjustedCropRect;
@property(nonatomic) struct CGRect normalizedFaceCropRect; // @synthesize normalizedFaceCropRect=_normalizedFaceCropRect;
@property(nonatomic) int imageManagerRequestID; // @synthesize imageManagerRequestID=_imageManagerRequestID;
@property(readonly, nonatomic) int faceCropRequestID; // @synthesize faceCropRequestID=_faceCropRequestID;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PHFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) PXPeopleFaceCropFetchOptions *options; // @synthesize options=_options;
- (id)description;
- (void)cancel;
- (id)initWithFetchOptions:(id)arg1;

@end
