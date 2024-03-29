//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, TFFeedbackEntryImageCollection;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormImageCollectionCell
{
    TFFeedbackEntryImageCollection *_imageCollectionEntry;
    NSMutableArray *_imageViews;
}

+ (struct CGSize)_sizeForImage:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct CGSize)_sizeForImages:(id)arg1 fittingSize:(struct CGSize)arg2 inTraitEnvironment:(id)arg3;
+ (struct UIEdgeInsets)_imageViewInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) TFFeedbackEntryImageCollection *imageCollectionEntry; // @synthesize imageCollectionEntry=_imageCollectionEntry;
- (id)_createImageView;
- (void)_setupImagesViewsForImages:(id)arg1;
- (void)setDisplayedDataImageCollection:(id)arg1;
- (unsigned long long)displayableDataType;
- (void)applyContentsOfEntry:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

