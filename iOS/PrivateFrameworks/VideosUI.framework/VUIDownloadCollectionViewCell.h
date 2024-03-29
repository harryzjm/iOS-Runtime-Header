//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImageView, VUIDownloadButton, VUIDownloadEntity, VUILabel;
@protocol VUIDownloadCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIDownloadCollectionViewCell
{
    _Bool _editing;
    id <VUIDownloadCollectionViewCellDelegate> _delegate;
    VUILabel *_metaDataHeaderFirstLabel;
    VUILabel *_metaDataHeaderSecondLabel;
    VUILabel *_dotSeparatorLabel;
    UIImageView *_editImageView;
    VUIDownloadEntity *_downloadEntity;
    unsigned long long _previousDownloadState;
    VUIDownloadButton *_downloadButton;
}

+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1;
+ (void)_showConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2;
+ (void)_movieConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2;
+ (void)configureVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2 width:(double)arg3 forMetrics:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) VUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) unsigned long long previousDownloadState; // @synthesize previousDownloadState=_previousDownloadState;
@property(retain, nonatomic) VUIDownloadEntity *downloadEntity; // @synthesize downloadEntity=_downloadEntity;
@property(retain, nonatomic) UIImageView *editImageView; // @synthesize editImageView=_editImageView;
@property(retain, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property(retain, nonatomic) VUILabel *metaDataHeaderSecondLabel; // @synthesize metaDataHeaderSecondLabel=_metaDataHeaderSecondLabel;
@property(retain, nonatomic) VUILabel *metaDataHeaderFirstLabel; // @synthesize metaDataHeaderFirstLabel=_metaDataHeaderFirstLabel;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <VUIDownloadCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateViewForEditState;
- (_Bool)_hasSecondaryLabel;
- (void)_configureViewElementsForAX;
- (void)_addDownloadButtonIfRequired:(id)arg1;
- (void)_addMetaDataLabelsIfRequired:(id)arg1;
- (struct CGSize)_layoutForAccessibility:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutForCompact:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2;
- (void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

