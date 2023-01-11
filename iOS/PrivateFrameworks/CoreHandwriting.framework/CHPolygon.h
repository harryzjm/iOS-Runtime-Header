//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHPolygon : NSObject
{
    double _area;
    long long _vertexCount;
    struct CGPoint *_vertices;
}

+ (struct CGPoint *)_createClippedPolygonForPolygon:(id)arg1 clippingLine:(struct CHLineSegment)arg2 clippedPolygonVertexCount:(long long *)arg3;
+ (id)_sutherlandHodgmanClipForSubjectPolygon:(id)arg1 usingClipPolygon:(id)arg2;
@property(readonly, nonatomic) struct CGPoint *vertices; // @synthesize vertices=_vertices;
@property(readonly, nonatomic) long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) double area; // @synthesize area=_area;
- (void)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;
- (long long)edgeCountIntersectingLineSegment:(struct CHLineSegment)arg1;
- (id)polygonByIntersectingWithClipPolygon:(id)arg1;
- (id)polygonDrawing;
- (id)description;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithVertices:(struct CGPoint *)arg1 vertexCount:(long long)arg2;

@end
