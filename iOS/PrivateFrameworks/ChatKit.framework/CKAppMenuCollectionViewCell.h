//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;
@protocol CKAppMenuCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKAppMenuCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    id <CKAppMenuCollectionViewCellDelegate> _delegate;
    UIView *_selectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) __weak id <CKAppMenuCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setSelected:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)didHoverOverCell:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

