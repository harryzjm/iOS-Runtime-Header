//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

@class UIButton, UILabel;

@interface CKStickerDetailNavigationBar : UIVisualEffectView
{
    UIButton *_closeButton;
    UILabel *_titleLabel;
    struct UIEdgeInsets _parentLayoutMargins;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets parentLayoutMargins; // @synthesize parentLayoutMargins=_parentLayoutMargins;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithEffect:(id)arg1;

@end

