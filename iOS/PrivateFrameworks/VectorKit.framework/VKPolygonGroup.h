//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKPolygonGroup
{
    struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> _strokeMeshInfo;
    struct vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> _strokeMeshes;
    shared_ptr_479d1306 _sourceTexture;
    shared_ptr_479d1306 _targetTexture;
    shared_ptr_479d1306 _sourceRoofTexture;
    shared_ptr_479d1306 _targetRoofTexture;
    unsigned char _lastResolvedZoom;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateTextures:(unsigned char)arg1 textureManager:(void *)arg2;
- (void)addStrokeForSection:(const void *)arg1 paddedCount:(unsigned int)arg2 key:(pair_802f950e)arg3 attributes:(const void *)arg4 styles:(void *)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor *)arg7;
- (unsigned char)initialStyleIndexForSection:(const void *)arg1 attributes:(const void *)arg2 styles:(const void *)arg3;
- (unsigned char)styleIndexForAttributes:(const void *)arg1 edgePair:(const struct GeoCodecsFeatureStylePair *)arg2;
- (_Bool)addFillForSection:(const void *)arg1 precision:(unsigned char)arg2 styleIndex:(unsigned int)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor *)arg5 triangulator:(void *)arg6;
- (void)addPolygon:(void *)arg1 accessor:(struct ResourceAccessor *)arg2 triangulator:(void *)arg3 withRounder:(struct PolygonRound *)arg4;
- (void)didFinishAddingData;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)prepareToStrokeSection:(const void *)arg1 key:(const void *)arg2 styles:(void *)arg3 paddedCount:(unsigned int)arg4;
- (void)prepareToFillSection:(const void *)arg1;
- (void)enclosePointsInBoundingBox:(const void *)arg1 count:(unsigned long long)arg2;
- (void)prepareForPolygon:(void *)arg1 withRounder:(struct PolygonRound *)arg2;
- (unsigned int)createStrokePointStyleList:(void *)arg1 section:(unsigned long long)arg2 outPointStyles:(void *)arg3 withRounder:(struct PolygonRound *)arg4;
@property(readonly, nonatomic) void *strokeMeshes;
- (void)updateTexturesIfNecessary:(float)arg1 textureManager:(void *)arg2;
- (void)setNeedsTextureUpdate;
@property(readonly, nonatomic) struct FeatureAttributeSet styleAttributes;
- (shared_ptr_479d1306)_textureForName:(const void *)arg1 textureManager:(void *)arg2;
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4 storage:(shared_ptr_fb8448a7)arg5;
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4;
@property(readonly, nonatomic) void *targetRoofTexture;
@property(readonly, nonatomic) void *sourceRoofTexture;
@property(readonly, nonatomic) void *targetTexture;
@property(readonly, nonatomic) void *sourceTexture;

@end

