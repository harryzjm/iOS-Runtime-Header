//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKVenueGroup
{
    struct optional<md::MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo>> _venueWallMeshInfo;
    struct optional<md::MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo>> _venueWallEndCapMeshInfo;
    struct optional<md::MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo>> _venueWallHorizontalStrokeMeshInfo;
    struct optional<md::MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo>> _venueWallVerticalStrokeMeshInfo;
    struct vector<std::shared_ptr<ggl::VenueWall::MeshMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> _venueWallMeshes;
    struct vector<std::shared_ptr<ggl::VenueWall::EndCapMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> _venueWallEndMeshes;
    struct vector<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> _venueWallHorizontalStrokeMeshes;
    struct vector<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> _venueWallVerticalStrokeMeshes;
    struct unordered_map<std::pair<const void *, unsigned long>, std::vector<md::Edge>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, std::allocator<std::pair<const std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> _venueWalls;
    unsigned long long _buildingId;
    float _maximumSectionLength;
    shared_ptr_479d1306 _wallTexture;
    int _layer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) int layer; // @synthesize layer=_layer;
- (void)updateTextures:(unsigned char)arg1 textureManager:(void *)arg2;
- (void)addStrokeForSection:(const void *)arg1 paddedCount:(unsigned int)arg2 key:(pair_802f950e)arg3 attributes:(const void *)arg4 styles:(void *)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor *)arg7;
- (void)addWallStrokesForSection:(const void *)arg1 edges:(const void *)arg2 attributes:(const void *)arg3 styles:(void *)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor *)arg6;
- (void)addWallsForSection:(const void *)arg1 edges:(const void *)arg2 attributes:(const void *)arg3 styles:(void *)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor *)arg6;
- (void)didFinishAddingData;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)prepareToStrokeSection:(const void *)arg1 key:(const void *)arg2 styles:(void *)arg3 paddedCount:(unsigned int)arg4;
- (void)prepareToGenerateWallStrokesForSection:(const void *)arg1 styles:(const void *)arg2 edges:(const void *)arg3;
- (void)prepareToGenerateWallsForSection:(const void *)arg1 styles:(void *)arg2 edges:(const void *)arg3;
- (struct StrokeBufferSizing)bufferSizingForStrokesOnSection:(const void *)arg1 styles:(const void *)arg2 edges:(const void *)arg3;
- (unsigned long long)verticalStrokeCountForSection:(const void *)arg1 styles:(const void *)arg2 edges:(const void *)arg3;
- (const void *)generateEdgeListForPolygonSection:(const void *)arg1 key:(const void *)arg2;
@property(readonly, nonatomic) void *wallTexture;
@property(readonly, nonatomic) float maximumSectionLength;
@property(readonly, nonatomic) unsigned long long buildingId;
@property(readonly, nonatomic) const void *venueWallVerticalStrokeMeshes;
@property(readonly, nonatomic) const void *venueWallHorizontalStrokeMeshes;
@property(readonly, nonatomic) const void *venueWallEndMeshes;
@property(readonly, nonatomic) const void *venueWallMeshes;
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 layer:(int)arg3 buildingId:(unsigned long long)arg4 contentScale:(float)arg5;
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 layer:(int)arg3 buildingId:(unsigned long long)arg4 contentScale:(float)arg5 storage:(shared_ptr_fb8448a7)arg6;

@end

