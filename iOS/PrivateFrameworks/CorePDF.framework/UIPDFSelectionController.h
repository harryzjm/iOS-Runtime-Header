//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIPDFPageView;
@protocol UIPDFSelectionWidget, UIPDFSelectionWidget><NSObject;

@interface UIPDFSelectionController : NSObject
{
    UIPDFPageView *_pageView;
    _Bool _rangeMode;
    id <UIPDFSelectionWidget><NSObject> _selectionWidget;
    _Bool _resizingWidget;
    struct CGPoint _selectionFixedPoint;
    struct CGRect _selectionBounds;
    _Bool _preceeds;
    _Bool _isTracking;
    struct CGPoint _adjustedPoint;
    _Bool _hiding;
    long long _firstIndex;
    long long _lastIndex;
    struct CGPoint _startPoint;
    _Bool _needsLayout;
    _Bool _cancelled;
    _Bool _instantModeIsSuspended;
    _Bool _instantHighlightMode;
}

@property(nonatomic) _Bool instantHighlightMode; // @synthesize instantHighlightMode=_instantHighlightMode;
@property(readonly, nonatomic) struct CGPoint adjustedPoint; // @synthesize adjustedPoint=_adjustedPoint;
@property(readonly, nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, nonatomic) id <UIPDFSelectionWidget> selectionWidget; // @synthesize selectionWidget=_selectionWidget;
@property(readonly, nonatomic) _Bool rangeMode; // @synthesize rangeMode=_rangeMode;
@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
- (id)description;
- (void)layoutSelections;
@property(readonly, nonatomic) struct CGPoint currentSelectionPoint;
@property(readonly, nonatomic) struct CGPoint initialSelectionPoint;
- (struct CGPoint)selectedPointOffset;
- (void)tracking:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (void)startTracking:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (void)suspendInstantHighlightMode;
- (void)endTracking:(struct CGPoint)arg1;
- (void)tracking:(struct CGPoint)arg1 showMagnifier:(_Bool *)arg2;
- (void)startTracking:(struct CGPoint)arg1 showMagnifier:(_Bool *)arg2;
- (void)startSelectingAt:(struct CGPoint)arg1;
- (_Bool)shouldTrackAt:(struct CGPoint)arg1;
- (void)hideWidget;
- (void)clearSelection;
- (void)extendSelectionToParagraph;
- (void)setSelectionFor:(struct CGPoint)arg1;
- (void)addSelectionWidget:(id)arg1;
- (_Bool)useParagraphMode;
- (void)adjustSelection:(struct CGPoint)arg1;
- (void)selectionShowDelayed:(id)arg1;
- (void)selectionShow:(id)arg1;
- (void)selectionHide:(id)arg1;
- (void)selectionShowToAncestor:(id)arg1;
- (void)selectionHideFromAncestor:(id)arg1;
- (void)dealloc;
- (id)init;

@end

