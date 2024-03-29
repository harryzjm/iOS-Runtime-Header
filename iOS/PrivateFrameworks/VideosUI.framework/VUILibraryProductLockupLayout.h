//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VUIMediaEntityType, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUILibraryProductLockupLayout : NSObject
{
    long long _type;
    VUIMediaEntityType *_entityType;
    VUITextLayout *_playLabelTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUITextLayout *_descriptionTextLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(retain, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property(retain, nonatomic) VUITextLayout *playLabelTextLayout; // @synthesize playLabelTextLayout=_playLabelTextLayout;
@property(readonly, nonatomic) VUIMediaEntityType *entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)contentDescriptionFontForSizeClass:(long long)arg1;
- (int)contentDescriptionNumberOfLinesForTraitCollection:(id)arg1;
- (id)descriptionTextLayoutForTraitCollection:(id)arg1 isExpanded:(_Bool)arg2;
- (id)subtitleTextLayoutForWindowWidth:(double)arg1;
- (long long)downloadButtonPosition;
- (double)buttonModuleTopMarginForWindowWidth:(double)arg1;
- (double)contentDescriptionBottomMarginForWindowWidth:(double)arg1;
- (double)contentDescriptionTopMarginForWindowWidth:(double)arg1;
- (double)metadataTopMargin;
- (double)subtitleTopMarginForWindowWidth:(double)arg1;
- (double)titleTopMargin;
- (double)coverArtBottomPadding;
- (double)coverArtImageRightMarginForWindowWidth:(double)arg1;
- (struct CGSize)coverArtImageSize;
- (long long)layoutTypeForWindowWidth:(double)arg1;
- (void)configLayout;
- (id)initWithLayoutType:(long long)arg1 entityType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

