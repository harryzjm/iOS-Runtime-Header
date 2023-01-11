//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryListItemView : UIView
{
    VUILabel *_titleLabel;
    UIImage *_itemImage;
    UIImageView *_listImageView;
}

@property(retain, nonatomic) UIImageView *listImageView; // @synthesize listImageView=_listImageView;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

