//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKSearchResultCell-Protocol.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface CKPhotoSearchResultCell <CKSearchResultCell>
{
    _Bool _isLivePhoto;
    _Bool _isVideo;
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_livePhotoImage;
    NSString *_identifier;
    UILabel *_durationLabel;
    UIImageView *_durationGradientImage;
    struct UIEdgeInsets marginInsets;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(retain, nonatomic) UIImageView *durationGradientImage; // @synthesize durationGradientImage=_durationGradientImage;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImageView *livePhotoImage; // @synthesize livePhotoImage=_livePhotoImage;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)_configureDurationLabelForResult:(id)arg1;
- (void)_videoDurationUpdated:(id)arg1;
- (void)_livePhotoUpdated:(id)arg1;
- (void)_thumbnailGenerated:(id)arg1;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) _Bool _ck_editing;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
