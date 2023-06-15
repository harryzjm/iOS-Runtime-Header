//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, WBSPrivateBrowsingExplanationItem;

__attribute__((visibility("hidden")))
@interface SFPrivateBrowsingExplanationItemCell : UICollectionViewCell
{
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewWidthConstraint;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
    WBSPrivateBrowsingExplanationItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WBSPrivateBrowsingExplanationItem *item; // @synthesize item=_item;
- (void)_updateImageViewWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

