//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, PDFPage, UIButton, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface PDFIconCollectionViewCell_iOS : UICollectionViewCell
{
    UIView *_overlayView;
    NSLayoutConstraint *_ratioConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    UIButton *_actionsButton;
    UIImageView *_imageView;
    PDFPage *_page;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDFPage *page; // @synthesize page=_page;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *actionsButton; // @synthesize actionsButton=_actionsButton;
- (void)setThumbnailWidth:(double)arg1;
- (void)updateAspectConstraintWithSize:(struct CGSize)arg1;
- (void)setupSubviews;
- (void)updateOverlay;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setNeedsUpdate;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
