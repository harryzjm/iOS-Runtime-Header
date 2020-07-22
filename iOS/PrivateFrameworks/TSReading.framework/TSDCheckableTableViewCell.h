//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView;

@interface TSDCheckableTableViewCell : UITableViewCell
{
    UIButton *mImageButton;
    UIImageView *mCheckmarkImageView;
    _Bool mChecked;
    _Bool mShowsCheckboxOnRight;
}

@property(nonatomic) _Bool checked; // @synthesize checked=mChecked;
@property(readonly, nonatomic) _Bool showsCheckboxOnRight; // @synthesize showsCheckboxOnRight=mShowsCheckboxOnRight;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setCheckmarkImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(_Bool)arg2 style:(long long)arg3;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(_Bool)arg2;

@end

