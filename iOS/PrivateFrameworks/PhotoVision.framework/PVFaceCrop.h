//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, PVFace;

@interface PVFaceCrop
{
    NSData *_faceCropData;
    PVFace *_originatingFace;
    struct CGSize _cachedImageDimensions;
    short _state;
}

@property(nonatomic) short state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize)imageDimensions;
- (id)originatingFace;
- (id)faceCropData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2;

@end
