//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <AvatarUI/AVTMSStickerViewDelegate-Protocol.h>

@class AVTMSStickerView, NSUUID, UIImageView, UILabel;
@protocol AVTStickerCollectionViewCellDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTStickerCollectionViewCell : UICollectionViewCell <AVTMSStickerViewDelegate>
{
    _Bool _showPrereleaseSticker;
    _Bool _stickerViewIsAnimating;
    NSUUID *_displaySessionUUID;
    id <AVTStickerCollectionViewCellDelegate> _delegate;
    UIImageView *_imageView;
    AVTMSStickerView *_stickerView;
    UILabel *_prereleaseLabel;
    struct CGSize _fullImageSize;
    struct CGRect _clippingRect;
}

+ (double)imageInsetForWidth:(double)arg1;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize fullImageSize; // @synthesize fullImageSize=_fullImageSize;
@property(nonatomic) _Bool stickerViewIsAnimating; // @synthesize stickerViewIsAnimating=_stickerViewIsAnimating;
@property(readonly, nonatomic) UILabel *prereleaseLabel; // @synthesize prereleaseLabel=_prereleaseLabel;
@property(readonly, nonatomic) AVTMSStickerView *stickerView; // @synthesize stickerView=_stickerView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <AVTStickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showPrereleaseSticker; // @synthesize showPrereleaseSticker=_showPrereleaseSticker;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
- (void)stickerViewWasTapped:(id)arg1;
- (void)stickerViewDidBeginPeel:(id)arg1;
- (void)prepareForReuse;
- (void)updateWithImage:(id)arg1 sticker:(id)arg2 animated:(_Bool)arg3;
- (struct CGSize)imageSizeFromURL:(id)arg1;
- (struct CGRect)stickerViewFrameForImageSize:(struct CGSize)arg1 clippingRect:(struct CGRect)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
- (void)setupPrereleaseLabelIfNeeded;
@property(nonatomic) _Bool allowsPeel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
