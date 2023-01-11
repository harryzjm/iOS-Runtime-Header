//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UILabel;
@protocol PKLoadingViewControllerDelegate;

@interface PKLoadingViewController : UIViewController
{
    id <PKLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}

- (void).cxx_destruct;
- (void)_cancelButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end
