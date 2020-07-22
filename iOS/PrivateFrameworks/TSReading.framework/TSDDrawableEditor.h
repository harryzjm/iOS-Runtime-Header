//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSDEditor-Protocol.h>

@class NSSet, NSString, TSDDrawableInfo, TSDInteractiveCanvasController, TSDMultiPaneController, TSKSelection;

@interface TSDDrawableEditor : NSObject <TSDEditor>
{
    TSDInteractiveCanvasController *mICC;
    NSSet *mInfos;
    TSDMultiPaneController *mGraphicInspector;
}

+ (id)keyPathsForValuesAffectingLayouts;
+ (_Bool)shouldSuppressMultiselection;
+ (id)keyPathsForValuesAffectingFirstInfo;
+ (id)keyPathsForValuesAffectingInfo;
@property(retain, nonatomic) NSSet *infos; // @synthesize infos=mInfos;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
- (_Bool)canAddOrShowComment;
- (double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1;
- (double)strokeWidthForNormalizedWidth:(double)arg1;
- (id)strokeColorPickerTitle;
- (id)strokeSwatches;
- (void)endChangingStrokeWidth:(id)arg1;
- (void)didChangeStrokeWidth:(id)arg1;
- (void)beginChangingStrokeWidth:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;
- (void)setStroke:(id)arg1;
- (id)stroke;
- (void)applyStylePresetWithIndex:(id)arg1;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (id)selectedLayoutsSupportingInspectorPositioning;
- (id)selectedLayoutsSupportingFlipping;
- (id)selectedLayoutsSupportingRotation;
- (id)topLevelInspectorAutosaveName;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
- (id)documentRoot;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (int)canPerformAction:(SEL)arg1;
@property(readonly, nonatomic) NSSet *layouts;
@property(readonly, nonatomic) TSDDrawableInfo *firstInfo;
- (id)infosOfClass:(Class)arg1;
@property(readonly, retain, nonatomic) TSDDrawableInfo *info;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)imageForPreset:(id)arg1 size:(struct CGSize)arg2;
- (id)viewControllerForMoreStyleOptions;
- (void)presetSelected:(id)arg1 sender:(id)arg2;
- (id)stylePresetKindForInspector;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) TSKSelection *selection;
@property(readonly) Class superclass;

@end

