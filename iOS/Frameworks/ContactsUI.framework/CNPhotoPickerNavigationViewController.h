//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPhotoPickerTrapView, NSArray;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerNavigationViewController
{
    _Bool _allowRotation;
    _Bool _disablingRotation;
    _Bool _isShowingKeyboard;
    CNPhotoPickerTrapView *_trapOverlayView;
    NSArray *_trapOverlayConstraints;
    struct CGSize _previousSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(nonatomic) _Bool disablingRotation; // @synthesize disablingRotation=_disablingRotation;
@property(nonatomic) struct CGSize previousSize; // @synthesize previousSize=_previousSize;
@property(retain, nonatomic) NSArray *trapOverlayConstraints; // @synthesize trapOverlayConstraints=_trapOverlayConstraints;
@property(retain, nonatomic) CNPhotoPickerTrapView *trapOverlayView; // @synthesize trapOverlayView=_trapOverlayView;
@property(nonatomic) _Bool allowRotation; // @synthesize allowRotation=_allowRotation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)arg1;
- (void)setupTrapOverlayView;
- (_Bool)isDisplayingTrapView;
- (_Bool)shouldDisplayTrapOverlayView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)beginDisablingAutorotation;
- (void)endDisablingAutorotation;
- (void)endDisablingAutorotationIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

@end

