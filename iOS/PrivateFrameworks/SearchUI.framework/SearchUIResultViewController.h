//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SearchUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, SearchUIReplicatorView, SearchUIResultTableViewController, SearchUISearchField, UIView;
@protocol SFFeedbackListener, SearchUIResultViewDelegate;

@interface SearchUIResultViewController : UIViewController <UIGestureRecognizerDelegate>
{
    SearchUIResultTableViewController *_resultTableViewController;
    SearchUIReplicatorView *_replicatorView;
    id <SearchUIResultViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SearchUIResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) SearchUIReplicatorView *replicatorView; // @synthesize replicatorView=_replicatorView;
@property(retain) SearchUIResultTableViewController *resultTableViewController; // @synthesize resultTableViewController=_resultTableViewController;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (id)contentScrollView;
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (void)updateWithResultSections:(id)arg1;
@property(nonatomic) _Bool shouldUseInsetRoundedSections;
@property(nonatomic) _Bool shouldHideResultsUnderKeyboard;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener;
@property(retain, nonatomic) SearchUISearchField *searchField;
@property(nonatomic) unsigned long long style;
- (unsigned long long)edgesForExtendedLayout;
- (void)didTap;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 inResultSection:(id)arg3;
@property(retain, nonatomic) UIView *footerView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
