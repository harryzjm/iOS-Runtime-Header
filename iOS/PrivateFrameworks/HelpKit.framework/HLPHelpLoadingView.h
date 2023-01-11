//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;
@protocol HLPHelpLoadingViewDelegate;

@interface HLPHelpLoadingView : UIView
{
    UIImageView *_errorImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    id <HLPHelpLoadingViewDelegate> _delegate;
    UILabel *_errorTitleLabel;
    UILabel *_errorMessageLabel;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(nonatomic) __weak id <HLPHelpLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showHelpBookInfo;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)showDefaultErrorMessage;
- (void)showNoConnectionErrorMessage;
- (void)removeErrorView;
- (void)showActivityIndicator:(_Bool)arg1;
- (id)init;

@end

