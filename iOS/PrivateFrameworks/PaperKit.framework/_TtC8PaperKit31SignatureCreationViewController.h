//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit31SignatureCreationViewController : UIViewController
{
    MISSING_TYPE *panelSize;
    MISSING_TYPE *downArrowImagePadding;
    MISSING_TYPE *clearButtonBottomPadding;
    MISSING_TYPE *clearButtonImagePadding;
    MISSING_TYPE *signatureLineInset;
    MISSING_TYPE *signatureLinePadding;
    MISSING_TYPE *signatureMarkPadding;
    MISSING_TYPE *signatureLineColor;
    MISSING_TYPE *buttonImageConfiguration;
    MISSING_TYPE *xmarkImageConfiguration;
    MISSING_TYPE *signaturePenWidth;
    MISSING_TYPE *navigationBar;
    MISSING_TYPE *signatureView;
    MISSING_TYPE *signatureLineView;
    MISSING_TYPE *doneItem;
    MISSING_TYPE *clearButton;
    MISSING_TYPE *savedFirstResponder;
    MISSING_TYPE *signatureDescription;
    MISSING_TYPE *completion;
    MISSING_TYPE *customLabelDoneAction;
}

- (void).cxx_destruct;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (void)updateDoneButtonState:(id)arg1;
- (void)descriptionAction;
- (void)clearAction;
- (void)cancelAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)becomeFirstResponder;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

