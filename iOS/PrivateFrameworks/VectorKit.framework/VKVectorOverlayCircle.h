//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VKVectorOverlayCircle
{
    CDStruct_02837cd9 _mapRect;
    Box_3d7e3c2c _bounds;
    struct CGColor *_fillColor;
    struct CGColor *_strokeColor;
    double _lineWidth;
    double _alpha;
    struct unfair_lock _propertiesLock;
    shared_ptr_9852d3ba _renderable;
    struct shared_ptr<md::CircleOverlayRenderable::Style> _style;
}

@property(readonly, nonatomic, getter=_renderable) shared_ptr_9852d3ba renderable; // @synthesize renderable=_renderable;
@property(readonly, nonatomic, getter=_bounds) Box_3d7e3c2c bounds; // @synthesize bounds=_bounds;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double alpha;
@property(nonatomic) struct CGColor *strokeColor;
@property(nonatomic) struct CGColor *fillColor;
@property(nonatomic) double lineWidth;
- (void)_updateStyleColor;
- (void)dealloc;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1 lineWidth:(double)arg2 fillColor:(struct CGColor *)arg3 strokeColor:(struct CGColor *)arg4 alpha:(double)arg5;

@end
