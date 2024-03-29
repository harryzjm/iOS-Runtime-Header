//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@class NSString, UILongPressGestureRecognizer, UIMenuController, UIPDFMagnifierController, UIPDFPageView, UIPDFSelectionController, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPDFViewTouchHandler : UIResponder
{
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_twoFingerTapRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFMagnifierController *_magnifyController;
    _Bool _trackingSelection;
    _Bool _showMagnifier;
    _Bool _showLoupe;
    _Bool _firstTouch;
    _Bool _useDelegateForLinks;
    _Bool _allowMenu;
}

+ (void)releaseViewManager;
@property _Bool allowMenu; // @synthesize allowMenu=_allowMenu;
- (void)hideMenu;
- (void)showMenu;
- (void)selectAll:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)twoFingerTapRecognized:(id)arg1;
- (void)singleTapRecognized:(id)arg1;
- (void)doubleTapRecognized:(id)arg1;
- (void)longPressRecognized:(id)arg1;
- (void)briefPressRecognized:(id)arg1;
- (_Bool)delegateGesture:(id)arg1 kind:(int)arg2;
- (void)setFirstTouch;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)nextResponder;
- (void)disableRecognizers;
- (void)enableRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

