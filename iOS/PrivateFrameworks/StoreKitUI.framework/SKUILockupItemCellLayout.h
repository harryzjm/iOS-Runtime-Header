//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIItemCellLayout.h"

@class NSString, SKUIEmbeddedMediaView, SKUILockupMetadataView, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupItemCellLayout : SKUIItemCellLayout
{
    struct UIEdgeInsets _contentInsets;
    struct CGSize _imageBoundingSize;
    long long _itemOfferStyle;
    UILabel *_itemOfferTextLabel;
    long long _layoutStyle;
    long long _lockupSize;
    SKUILockupMetadataView *_metadataView;
    _Bool _playsInlineVideo;
    long long _verticalAlignment;
    SKUIEmbeddedMediaView *_videoThumbnailView;
    struct CGSize _videoThumbnailSize;
}

+ (struct CGSize)videoThumbnailSizeForVideo:(id)arg1 clientContext:(id)arg2;
+ (double)heightForLockupStyle:(struct SKUILockupStyle)arg1 item:(id)arg2 editorial:(id)arg3 clientContext:(id)arg4;
+ (double)heightForLockupComponent:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize videoThumbnailSize; // @synthesize videoThumbnailSize=_videoThumbnailSize;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) _Bool playsInlineVideo; // @synthesize playsInlineVideo=_playsInlineVideo;
@property(nonatomic) long long lockupSize; // @synthesize lockupSize=_lockupSize;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) long long itemOfferStyle; // @synthesize itemOfferStyle=_itemOfferStyle;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_layoutVertical;
- (struct CGRect)_layoutIconImageView;
- (void)_layoutHorizontal;
- (id)_itemOfferTextLabel;
- (_Bool)_isItemOfferHidden;
- (void)_beginVideoPlaybackAction:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutForItemOfferChange;
@property(nonatomic) unsigned long long visibleFields;
@property(retain, nonatomic) UIImage *videoThumbnailImage;
@property(nonatomic) float userRating;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *releaseDateString;
@property(nonatomic) long long numberOfUserRatings;
@property(copy, nonatomic) NSString *itemCountString;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *editorialBadgeString;
@property(copy, nonatomic) NSString *categoryString;
@property(copy, nonatomic) NSString *artistName;
- (void)playInlineVideoWithURL:(id)arg1;
- (void)endVideoPlaybackAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTableViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)_initSKUILockupItemCellLayout;

@end

