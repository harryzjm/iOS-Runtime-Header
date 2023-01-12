//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSLayoutConstraint, NSString, UIBarButtonItem, UIKBAutoFillTestExpectedResult, UIKBAutoFillTestTaggerView, UIKBAutoFillTestViewController, UIScrollView, UIView;
@protocol UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController
{
    UIKBAutoFillTestViewController *_testViewController;
    UIKBAutoFillTestExpectedResult *_expectedResult;
    UIScrollView *_scrollView;
    UIKBAutoFillTestTaggerView *_taggerView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    UIView *_highlightView;
    UIView *_highlightBox;
    UIBarButtonItem *_doneBarButtonItem;
    id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIKBAutoFillTestViewController *testViewController; // @synthesize testViewController=_testViewController;
@property(nonatomic) __weak id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;
- (void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;
- (long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;
- (long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;
- (void)taggerView:(id)arg1 willTagRequest:(id)arg2;
- (void)taggerViewDidFinish:(id)arg1;
- (void)_removeTaggerHighlightView;
- (void)_moveTaggerHighlightViewOverView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_cancelBarButtonItemAction:(id)arg1;
- (void)viewDidLoad;
- (void)_enumerateSubviewsOfRootView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithAutoFillTestViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

