//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DPrefilteredLineRenderer, TSCH3Dvec3DataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject
{
    TSCH3Dvec3DataBuffer *edgeVertices;
    TSCH3DPrefilteredLineRenderer *mRenderer;
    unsigned long long mSelectedSeriesIndex;
    tvec4_ac57c72d mColor;
    TSCH3Dvec3DataBuffer *mEdgeVertices;
}

@property(nonatomic) tvec4_ac57c72d color; // @synthesize color=mColor;
@property(nonatomic) unsigned long long selectedSeriesIndex; // @synthesize selectedSeriesIndex=mSelectedSeriesIndex;
@property(retain, nonatomic) TSCH3Dvec3DataBuffer *edgeVertices; // @synthesize edgeVertices=mEdgeVertices;
- (id).cxx_construct;
@property(readonly, nonatomic) TSCH3DPrefilteredLineRenderer *renderer;
- (void)dealloc;
- (id)init;

@end

