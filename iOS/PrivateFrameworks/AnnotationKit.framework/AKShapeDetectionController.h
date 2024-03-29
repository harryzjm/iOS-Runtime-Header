//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKCandidatePickerView_iOS, AKController, AKPageModelController, CHDrawing, CHRecognizer, NSMutableArray, NSMutableDictionary;
@protocol AKShapeDetectionControllerDelegate;

@interface AKShapeDetectionController : NSObject
{
    _Bool _preferDoodle;
    _Bool _coalescesDoodles;
    _Bool _shapeDetectionEnabled;
    _Bool _isPreviousCandidateAnnotationUndecided;
    id <AKShapeDetectionControllerDelegate> _delegate;
    AKController *_controller;
    AKAnnotation *_candidateAnnotation;
    CHRecognizer *_shapeRecognizer;
    AKPageModelController *_modelControllerToObserveForAnnotationsAndSelections;
    CHDrawing *_lastDrawing;
    double _veryHighConfidenceLevel;
    CHDrawing *_candidateDrawing;
    NSMutableArray *_candidateAKTags;
    NSMutableDictionary *_candidateAKTagsToAnnotationInfoMap;
    AKCandidatePickerView_iOS *_candidatePickerView;
}

+ (void)logAllResults:(id)arg1;
+ (_Bool)drawingIsValidForRecognition:(id)arg1 withPath:(struct CGPath *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) AKCandidatePickerView_iOS *candidatePickerView; // @synthesize candidatePickerView=_candidatePickerView;
@property(retain, nonatomic) NSMutableDictionary *candidateAKTagsToAnnotationInfoMap; // @synthesize candidateAKTagsToAnnotationInfoMap=_candidateAKTagsToAnnotationInfoMap;
@property(retain, nonatomic) NSMutableArray *candidateAKTags; // @synthesize candidateAKTags=_candidateAKTags;
@property(retain, nonatomic) CHDrawing *candidateDrawing; // @synthesize candidateDrawing=_candidateDrawing;
@property double veryHighConfidenceLevel; // @synthesize veryHighConfidenceLevel=_veryHighConfidenceLevel;
@property(retain, nonatomic) CHDrawing *lastDrawing; // @synthesize lastDrawing=_lastDrawing;
@property(retain, nonatomic) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections; // @synthesize modelControllerToObserveForAnnotationsAndSelections=_modelControllerToObserveForAnnotationsAndSelections;
@property _Bool isPreviousCandidateAnnotationUndecided; // @synthesize isPreviousCandidateAnnotationUndecided=_isPreviousCandidateAnnotationUndecided;
@property(nonatomic, getter=shapeDetectionEnabled) _Bool shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) _Bool coalescesDoodles; // @synthesize coalescesDoodles=_coalescesDoodles;
@property(nonatomic) _Bool preferDoodle; // @synthesize preferDoodle=_preferDoodle;
@property(retain, nonatomic) CHRecognizer *shapeRecognizer; // @synthesize shapeRecognizer=_shapeRecognizer;
@property(nonatomic) __weak AKAnnotation *candidateAnnotation; // @synthesize candidateAnnotation=_candidateAnnotation;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <AKShapeDetectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)convertDrawingBoundsInInputView:(struct CGRect)arg1 outBoundsInPageModel:(struct CGRect *)arg2;
- (id)createInkResultFromInkDrawing:(id)arg1 annotation:(id)arg2;
- (id)_createDoodleShapeResultWithPath:(struct CGPath *)arg1 withDrawingCenter:(struct CGPoint)arg2 pathIsPrestroked:(_Bool)arg3;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(struct CGPoint)arg2;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(struct CGRect)arg2 shouldGoToPageController:(id *)arg3;
- (_Bool)_isResultVeryHighConfidence:(id)arg1;
- (void)_performRecognitionOnDrawing:(id)arg1 withInkDrawing:(id)arg2 orWithDoodlePath:(struct CGPath *)arg3 boundsInInputView:(struct CGRect)arg4 center:(struct CGPoint)arg5 isPrestroked:(_Bool)arg6 optionalAnnotation:(id)arg7;
- (void)performRecognitionOnDrawing:(id)arg1 withPath:(struct CGPath *)arg2 boundsInInputView:(struct CGRect)arg3 center:(struct CGPoint)arg4 isPrestroked:(_Bool)arg5;
- (void)performRecognitionOnDrawing:(id)arg1 withDrawing:(id)arg2 annotation:(id)arg3 boundsInInputView:(struct CGRect)arg4 center:(struct CGPoint)arg5;
- (void)_pickCandidateResultWithAnnotationType:(long long)arg1;
- (void)_pickCandidateResult:(id)arg1;
- (void)_teardownCandidatePickerBar;
- (long long)_matchingBlurEffectStyleForCurrentTintColor:(id)arg1;
- (void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)_toolTagForCHRecognitionResult:(id)arg1;
- (void)_teardownCandidatePicker;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(_Bool)arg3;
- (void)clearPreviousCandidateAnnotation;
- (void)dismissCandidatePicker;
- (void)_shouldDismissNotification:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) _Bool isShowingCandidatePicker;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

