//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI34TabletSessionSummaryViewController : UIViewController
{
    MISSING_TYPE *presenter;
    MISSING_TYPE *eventHub;
    MISSING_TYPE *storefrontLocalizer;
    MISSING_TYPE *contentSummaryView;
    MISSING_TYPE *stringBuilder;
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *scrollView;
    MISSING_TYPE *gridView;
    MISSING_TYPE *upNextSummaryView;
    MISSING_TYPE *queueCompleteView;
    MISSING_TYPE *buttonStackView;
    MISSING_TYPE *doneButton;
    MISSING_TYPE *cooldownButton;
    MISSING_TYPE *stateOfMindLoggingButton;
    MISSING_TYPE *ttrBarButtonItem;
    MISSING_TYPE *shareBarButtonItem;
    MISSING_TYPE *activityRingsView;
    MISSING_TYPE *activityRingsBottomPinningConstraint;
    MISSING_TYPE *burnBarView;
    MISSING_TYPE *burnBarToContentSummaryLeadingConstraint;
    MISSING_TYPE *burnBarToActivityRingsTopConstraint;
    MISSING_TYPE *burnBarToActivityRingsLeadingConstraint;
    MISSING_TYPE *burnBarToGridViewTopConstraint;
    MISSING_TYPE *burnBarBottomPinningConstraint;
    MISSING_TYPE *burnBarConstraints;
    MISSING_TYPE *contentSummaryTrailingAnchor;
    MISSING_TYPE *gridViewHeight;
    MISSING_TYPE *gridViewWidth;
    MISSING_TYPE *gridViewTopSpacing;
    MISSING_TYPE *summary;
    MISSING_TYPE *additionalMetadata;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateViewConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)ttrButtonTapped;
- (void)shareButtonTapped;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;

@end

