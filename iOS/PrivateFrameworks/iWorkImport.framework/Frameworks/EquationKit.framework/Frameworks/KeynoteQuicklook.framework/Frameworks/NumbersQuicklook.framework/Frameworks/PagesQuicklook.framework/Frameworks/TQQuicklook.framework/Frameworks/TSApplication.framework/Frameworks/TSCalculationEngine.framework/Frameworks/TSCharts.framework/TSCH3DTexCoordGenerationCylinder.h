//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DTexCoordGenerationCylinder
{
    box_c9ef104e _bbox;
}

+ (id)generatorWithBBox:(const void *)arg1 transform:(const void *)arg2;
+ (id)generatorWithBBox:(const void *)arg1;
- (id).cxx_construct;
- (void)generateFromVertexArray:(const void *)arg1 normalArray:(const void *)arg2 numVertices:(long long)arg3 destination4D:(void *)arg4;
- (id)initWithBBox:(const void *)arg1;
- (id)initWithBBox:(const void *)arg1 transform:(const void *)arg2;

@end

