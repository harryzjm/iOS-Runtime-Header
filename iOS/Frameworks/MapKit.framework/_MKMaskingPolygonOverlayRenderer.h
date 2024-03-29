//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKOverlayRenderer.h"

@class VKVectorOverlayMaskingPolygonGroup;

__attribute__((visibility("hidden")))
@interface _MKMaskingPolygonOverlayRenderer : MKOverlayRenderer
{
    VKVectorOverlayMaskingPolygonGroup *_vectorData;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
- (_Bool)_canPossiblyDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (id)vectorDataForOverlay:(id)arg1;
- (_Bool)overlayCanProvideVectorData:(id)arg1;
- (id)_vectorGeometry;
- (_Bool)_canProvideVectorGeometry;
- (id)initWithMultiPolygon:(id)arg1;

@end

