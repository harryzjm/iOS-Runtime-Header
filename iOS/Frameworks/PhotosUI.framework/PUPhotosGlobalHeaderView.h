//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosGlobalHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIView *_separatorView;
    NSString *_title;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forTitle:(id)arg2;
+ (struct CGSize)_instanceLayoutSubviews:(id)arg1 forTitle:(id)arg2 inBounds:(struct CGRect)arg3;
+ (id)_newTitleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;

@end

