//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUIContainerBoxView, NUIContainerStackView, SearchUIImageView, SearchUILabel, UIImageView;

@interface SearchUIVerticalLayoutCardSectionView
{
    SearchUIImageView *_thumbnailView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_footnoteLabel;
    NUIContainerBoxView *_thumbnailOverlayContainer;
    UIImageView *_gradientImageView;
    SearchUILabel *_thumbnailOverlayLabel;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SearchUILabel *thumbnailOverlayLabel; // @synthesize thumbnailOverlayLabel=_thumbnailOverlayLabel;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(retain, nonatomic) NUIContainerBoxView *thumbnailOverlayContainer; // @synthesize thumbnailOverlayContainer=_thumbnailOverlayContainer;
@property(retain, nonatomic) SearchUILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SearchUIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (void)buildThumbnailOverlayContainerIfNecessary;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) NUIContainerStackView *contentView; // @dynamic contentView;

@end
