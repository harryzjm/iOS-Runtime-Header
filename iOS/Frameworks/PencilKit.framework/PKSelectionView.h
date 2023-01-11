//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/UIDragInteractionDelegate_Private-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, NSMutableArray, NSString, PKSelectionController, PKStrokeSelection, UIBezierPath, UIDragInteraction, UIDragPreview, UIImage, UIImageView, UILongPressGestureRecognizer, UIResponder, UITapGestureRecognizer;

@interface PKSelectionView : UIView <UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate>
{
    UIImageView *_strokeSelectionImageView;
    UIDragInteraction *_dragInteraction;
    struct CGRect _originalStrokeFrame;
    struct CGPoint _initialDragPosition;
    double _initialRotation;
    PKSelectionController *_selectionController;
    _Bool _isClearingSelection;
    UITapGestureRecognizer *_editMenuGR;
    CAShapeLayer *_lassoLayer;
    CAShapeLayer *_whiteLassoLayer;
    NSMutableArray *_subLassoLayers;
    UIDragPreview *_previewProvider;
    double _rotation;
    double _scale;
    struct CGPoint _originalTranslation;
    double _startRotation;
    double _startScale;
    struct CGPoint _editMenuLocation;
    UIResponder *_previousResponder;
    _Bool _isDragging;
    _Bool _wantsDragPlatter;
    PKStrokeSelection *_strokeSelection;
    UIImage *_strokeSelectionImage;
    UILongPressGestureRecognizer *_dragGR;
    UIBezierPath *_lassoPath;
    CDUnknownBlockType _calculateSelectionHullBlock;
    struct CGPoint _offsetInTouchView;
    struct CGAffineTransform _selectionDrawingTransform;
    struct CGAffineTransform _userTransform;
}

@property(nonatomic) struct CGAffineTransform userTransform; // @synthesize userTransform=_userTransform;
@property(copy, nonatomic) CDUnknownBlockType calculateSelectionHullBlock; // @synthesize calculateSelectionHullBlock=_calculateSelectionHullBlock;
@property(retain, nonatomic) UIBezierPath *lassoPath; // @synthesize lassoPath=_lassoPath;
@property(readonly, nonatomic) UILongPressGestureRecognizer *dragGR; // @synthesize dragGR=_dragGR;
@property(nonatomic) _Bool wantsDragPlatter; // @synthesize wantsDragPlatter=_wantsDragPlatter;
@property(nonatomic) struct CGAffineTransform selectionDrawingTransform; // @synthesize selectionDrawingTransform=_selectionDrawingTransform;
@property(retain, nonatomic) UIImage *strokeSelectionImage; // @synthesize strokeSelectionImage=_strokeSelectionImage;
@property(readonly, nonatomic) struct CGPoint offsetInTouchView; // @synthesize offsetInTouchView=_offsetInTouchView;
@property(retain, nonatomic) PKStrokeSelection *strokeSelection; // @synthesize strokeSelection=_strokeSelection;
@property(readonly, nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
- (void).cxx_destruct;
- (void)didBeginDraggingSelection;
- (void)scrollContent:(struct CGPoint)arg1;
- (id)strokesContainedBySelection:(id)arg1;
- (vector_e1abc270)pointsOfInterestForStrokes:(id)arg1;
- (void)updateLocationForDrop:(struct CGPoint)arg1;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)animateViewToOriginalPosition;
- (void)makeViewAliveAtLocation:(struct CGPoint)arg1;
- (void)_dragWillBegin;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateTransform;
- (void)rotateSelection:(id)arg1;
- (void)scaleSelection:(id)arg1;
- (void)didEndGestureWithTranslation:(struct CGPoint)arg1 transform:(struct CGAffineTransform)arg2;
- (void)dragSelection:(id)arg1;
- (void)setAlpha:(double)arg1;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideStrokeSelectionImageView:(_Bool)arg1 animated:(_Bool)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)toggleEditMenu;
- (_Bool)canBecomeFirstResponder;
- (_Bool)lassoContainsPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addAnimationsToSelectionLayer:(id)arg1 whiteLayer:(id)arg2;
- (void)setupAnimatedLassoForStrokes:(id)arg1 lassoLayer:(id)arg2 whiteLassoLayer:(id)arg3 isSelection:(_Bool)arg4 lassoStroke:(id)arg5;
- (void)setupAnimatedLasso;
- (void)generateStrokeImageForPasteAndDND;
- (void)_clearSelection:(id)arg1;
- (void)_setupWindowNotificationsForScene:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (struct CGColor *)selectionColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 strokeSelection:(id)arg2 selectionController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
