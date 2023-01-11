//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class NSArray, NSDictionary;

@interface VNFaceRegionMap : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>
{
    unsigned long long _requestRevision;
    struct vImage_Buffer _regionMap;
    struct CGRect _userBBox;
    struct _Geometry2D_rect2D_ _internalAlignedBBox;
    _Bool _deallocateBuffer;
    NSDictionary *_pixelValueToRegionLabelMap;
    NSArray *_regionLabels;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSArray *regionLabels; // @synthesize regionLabels=_regionLabels;
- (void).cxx_destruct;
- (id)regionNameAtNormalizedFaceCoordinate:(struct CGPoint)arg1;
- (id)regionNameAtImageCoordinate:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2;
- (id)regionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint)arg1;
- (id)getRegionLabels;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRequestRevision:(unsigned long long)arg1 regionMap:(struct vImage_Buffer *)arg2 deallocateBuffer:(_Bool)arg3 userBBox:(struct CGRect)arg4 alignedBBox:(struct _Geometry2D_rect2D_)arg5 valueToLabelMap:(id)arg6;

@end

