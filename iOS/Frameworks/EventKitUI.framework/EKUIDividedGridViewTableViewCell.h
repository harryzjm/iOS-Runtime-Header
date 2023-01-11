//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class EKUIDividedGridViewController, UIView;

@interface EKUIDividedGridViewTableViewCell : UITableViewCell
{
    EKUIDividedGridViewController *_gridViewController;
    UIView *_topDivider;
    UIView *_bottomDivider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomDivider; // @synthesize bottomDivider=_bottomDivider;
@property(retain, nonatomic) UIView *topDivider; // @synthesize topDivider=_topDivider;
@property(retain) EKUIDividedGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (_Bool)wantsDrawBackground;
- (struct CGRect)_separatorFrame;
@property(nonatomic) _Bool drawsTopDivider;
- (void)setDrawBottomDivider:(_Bool)arg1;
- (_Bool)drawBottomDivider;
- (_Bool)_isWiderThanMaximum;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5;

@end
