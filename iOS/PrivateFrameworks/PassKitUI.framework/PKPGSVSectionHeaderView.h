//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, UIActivityIndicatorView, UILabel;

@interface PKPGSVSectionHeaderView : UIView
{
    UILabel *_titleView;
    UILabel *_environmentLabel;
    PKContinuousButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    struct UIEdgeInsets _margins;
    _Bool _showActivityIndicator;
    unsigned long long _passType;
}

@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(readonly, nonatomic) unsigned long long passType; // @synthesize passType=_passType;
- (void).cxx_destruct;
- (void)_addTapped;
- (void)addTapped;
- (void)layoutSubviews;
- (id)initWithPassType:(unsigned long long)arg1;
- (id)init;

@end
