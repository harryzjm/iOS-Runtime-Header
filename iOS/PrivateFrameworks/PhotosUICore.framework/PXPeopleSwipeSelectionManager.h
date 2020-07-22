//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAutoScrollerDelegate-Protocol.h>

@class NSIndexPath, NSSet, NSString, PXUIAutoScroller, UIGestureRecognizer, UIScrollView;
@protocol PXPeopleSwipeSelectionManagerDelegate;

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate>
{
    CDStruct_0794f076 _needsUpdateFlags;
    CDStruct_d45a99d3 _delegateFlags;
    id <PXPeopleSwipeSelectionManagerDelegate> _delegate;
    unsigned long long _state;
    UIScrollView *_scrollView;
    UIGestureRecognizer *_swipeGestureRecognizer;
    NSIndexPath *_startingIndexPath;
    NSIndexPath *_currentIndexPath;
    NSSet *_selectedIndexPathsBeforeSwipe;
    id _pausingChangesToken;
    PXUIAutoScroller *_autoScroller;
}

@property(readonly, nonatomic) PXUIAutoScroller *autoScroller; // @synthesize autoScroller=_autoScroller;
@property(retain, nonatomic) id pausingChangesToken; // @synthesize pausingChangesToken=_pausingChangesToken;
@property(copy, nonatomic) NSSet *selectedIndexPathsBeforeSwipe; // @synthesize selectedIndexPathsBeforeSwipe=_selectedIndexPathsBeforeSwipe;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) NSIndexPath *startingIndexPath; // @synthesize startingIndexPath=_startingIndexPath;
@property(readonly, nonatomic) UIGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <PXPeopleSwipeSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (void)_updateSelectedIndexPaths;
- (void)_invalidateSelectedIndexPaths;
- (void)_endSelection;
- (void)_updateSelectionWithHitIndexPath:(id)arg1 leadingClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;
- (void)_beginSelectionFromIndexPath:(id)arg1;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (id)_itemIndexPathClosestAboveLocation:(struct CGPoint)arg1;
- (id)_itemIndexPathClosestLeadingLocation:(struct CGPoint)arg1;
- (id)_itemIndexPathAtLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isSelecting;
- (void)dealloc;
- (id)init;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

