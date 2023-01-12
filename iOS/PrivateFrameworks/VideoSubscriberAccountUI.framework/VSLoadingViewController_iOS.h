//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView;
@protocol VSLoadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSLoadingViewController_iOS : UIViewController
{
    _Bool _cancellationAllowed;
    id <VSLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property(nonatomic) __weak id <VSLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelButtonPressed:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

