//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UICollectionView, UILabel;

@interface PXCMMPeopleStripView : UIView
{
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    UIButton *_addButton;
}

@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_preferredSizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

