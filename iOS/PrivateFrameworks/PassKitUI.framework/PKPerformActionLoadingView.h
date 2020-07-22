//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface PKPerformActionLoadingView : UIView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}

@property(readonly, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

