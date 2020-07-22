//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CKAppChevronView, UILabel;

@interface CKAppGrabberView : UIView
{
    UILabel *_pluginTitleLabel;
    UIView *_headerView;
    UIView *_grayLine;
    CKAppChevronView *_chevronView;
}

+ (double)roundedCornerRadius;
- (void).cxx_destruct;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long state;
- (void)updateHeaderFrame:(_Bool)arg1;
- (void)setRoundsTopConers:(_Bool)arg1;
- (void)fadeOutAppTitle;
- (void)updateAppTitle:(id)arg1;
- (double)chevronMaxYInView:(id)arg1;
- (double)visualOriginYInView:(id)arg1;
@property(readonly, nonatomic) double chevronMaxYOffset;
@property(readonly, nonatomic) double visualOriginYOffset;
- (id)initWithFrame:(struct CGRect)arg1;

@end
