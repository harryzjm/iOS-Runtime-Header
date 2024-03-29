//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DPlaneProjectRenderProcessor
{
    struct plane<glm::detail::tvec3<float>> _plane;
    tvec3_17f03ce0 _projPt;
    box_c9ef104e _bounds;
}

+ (id)processorWithPlane:(const void *)arg1 projPt:(const void *)arg2;
- (id).cxx_construct;
@property(readonly, nonatomic) const void *bounds; // @synthesize bounds=_bounds;
- (void)submit:(id)arg1;
- (id)initWithPlane:(const void *)arg1 projPt:(const void *)arg2;

@end

