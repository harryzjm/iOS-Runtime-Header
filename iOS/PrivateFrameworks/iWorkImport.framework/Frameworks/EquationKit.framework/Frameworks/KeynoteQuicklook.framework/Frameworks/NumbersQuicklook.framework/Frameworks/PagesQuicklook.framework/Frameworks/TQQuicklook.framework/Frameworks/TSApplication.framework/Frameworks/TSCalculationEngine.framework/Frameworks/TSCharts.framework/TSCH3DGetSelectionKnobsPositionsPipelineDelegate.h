//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSCH3DChartRep, TSCH3DGeometry, TSCH3DScene;

@interface TSCH3DGetSelectionKnobsPositionsPipelineDelegate : NSObject
{
    TSCH3DChartRep *_rep;
    NSArray *_selection;
    NSMutableArray *_projectedPoints;
    TSCH3DGeometry *_geometry;
    NSMutableDictionary *_labelsBoundsForMerging;
    TSCH3DScene *_scene;
    int _currentLabelType;
    int _knobsMode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *projectedPoints; // @synthesize projectedPoints=_projectedPoints;
@property(retain, nonatomic) TSCH3DGeometry *geometry; // @synthesize geometry=_geometry;
- (id)p_selectedSeries;
- (_Bool)p_labelSelectedForType:(int)arg1 alignment:(unsigned long long)arg2 elementIndex:(long long)arg3;
- (_Bool)willSubmitGeometry:(id)arg1;
@property(readonly, nonatomic) _Bool shouldMerge;
- (void)updateExternalLabelAttribute:(id)arg1 sceneObject:(id)arg2 labelRenderInfo:(id)arg3;
- (_Bool)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(id)arg2;
- (_Bool)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(unsigned long long)arg3 elementIndex:(unsigned long long)arg4 forSceneObject:(id)arg5;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)addLabelBoundsForMerging:(struct CGRect)arg1;
- (void)setOffset:(void *)arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(void *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (_Bool)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (_Bool)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didEndProcessingSceneObject:(id)arg1;
- (_Bool)willBeginProcessingSceneObject:(id)arg1;
- (_Bool)willSubmitElement:(id)arg1 sceneObject:(id)arg2;
- (_Bool)willRenderElement:(id)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(id)arg1 sceneObject:(id)arg2;
- (_Bool)willUpdateElementEffectsStatesForElement:(id)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(id)arg1 sceneObject:(id)arg2;
- (_Bool)willProcessElement:(id)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (_Bool)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (_Bool)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (id)initWithRep:(id)arg1 selection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

