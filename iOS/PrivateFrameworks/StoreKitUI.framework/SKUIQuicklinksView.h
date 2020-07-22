//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface SKUIQuicklinksView : UIView
{
    UIView *_borderView;
    UIView *_collectionView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UIView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

