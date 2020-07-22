//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SFDetailedRowCardSection, SFSearchResult, SearchUIImageView;

@interface SearchUIThumbnailView : UIView
{
    SFSearchResult *_result;
    SFDetailedRowCardSection *_detailedCardSection;
    SearchUIImageView *_imageView;
    UIView *_overlayPlayButton;
}

+ (id)thumbnailForResult:(id)arg1;
@property(retain) UIView *overlayPlayButton; // @synthesize overlayPlayButton=_overlayPlayButton;
@property(retain) SearchUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) SFDetailedRowCardSection *detailedCardSection; // @synthesize detailedCardSection=_detailedCardSection;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)preventThumbnailScaling;
- (void)updateOverlayPlayButtonForThumbnail:(id)arg1 overlayButton:(_Bool)arg2;
- (_Bool)shouldVerticallyCenter;
- (void)appIconImageDidChange:(id)arg1;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (void)updateWithResult:(id)arg1;
- (void)updateWithCardSection:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;

@end

