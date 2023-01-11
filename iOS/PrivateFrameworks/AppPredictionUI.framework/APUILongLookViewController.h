//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppPredictionUI/PLExpandedPlatterPresentationViewDelegate-Protocol.h>
#import <AppPredictionUI/PLPreviewInteractionPresentable-Protocol.h>

@class NSString, PLExpandedPlatterView, SUICProgressEventViewController, UIActivityIndicatorView, UITapGestureRecognizer, UIView;
@protocol APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, PLPreviewInteractionPresenting;

@interface APUILongLookViewController : UIViewController <PLPreviewInteractionPresentable, PLExpandedPlatterPresentationViewDelegate>
{
    SUICProgressEventViewController *_progressEventViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    _Bool _suppressSpinner;
    id <PLPreviewInteractionPresenting> _presenter;
    id <APUILongLookViewControllerDataSource> _dataSource;
    id <APUILongLookViewControllerDelegate> _delegate;
    PLExpandedPlatterView *_expandedPlatterView;
    UITapGestureRecognizer *_platterTapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *platterTapGestureRecognizer; // @synthesize platterTapGestureRecognizer=_platterTapGestureRecognizer;
@property(retain, nonatomic) PLExpandedPlatterView *expandedPlatterView; // @synthesize expandedPlatterView=_expandedPlatterView;
@property(nonatomic) __weak id <APUILongLookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <APUILongLookViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PLPreviewInteractionPresenting> presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (id)expandedPlatterViewForPresentationView:(id)arg1;
- (void)_platterUtilityButtonTapped:(id)arg1;
- (void)_platterDidReceiveTap:(id)arg1;
- (void)setExpandedPlatterSize:(struct CGSize)arg1;
- (void)_setActions:(id)arg1;
- (void)_setCustomContentViewController:(id)arg1;
- (void)_setupContentView;
- (void)_setupProgressIndicator;
- (void)_dismissButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *viewForTouchContinuation;
@property(readonly, nonatomic) UIView *viewWithContent;

@end
