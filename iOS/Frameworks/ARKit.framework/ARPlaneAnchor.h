//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARPatchGrid, MISSING_TYPE;

@interface ARPlaneAnchor
{
    long long _alignment;
    ARPatchGrid *_gridExtent;
    long long _activePlaneID;
    MISSING_TYPE *_center;
    MISSING_TYPE *_extent;
    CDStruct_14d5dc5e _visionTransform;
}

@property(nonatomic) long long activePlaneID; // @synthesize activePlaneID=_activePlaneID;
@property(nonatomic) CDStruct_14d5dc5e visionTransform; // @synthesize visionTransform=_visionTransform;
@property(retain, nonatomic) ARPatchGrid *gridExtent; // @synthesize gridExtent=_gridExtent;
@property(nonatomic) MISSING_TYPE *extent; // @synthesize extent=_extent;
@property(nonatomic) MISSING_TYPE *center; // @synthesize center=_center;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)_description:(_Bool)arg1;
- (id)_hitTestFromOrigin:(_Bool)arg1 withDirection:usingExtent: /* Error: Ran out of types for this method. */;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 alignment:(long long)arg3;

@end
