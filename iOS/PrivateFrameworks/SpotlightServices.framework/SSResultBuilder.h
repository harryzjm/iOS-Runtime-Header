//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SFSearchResult_SpotlightExtras, SPSearchQueryContext;

@interface SSResultBuilder : NSObject
{
    _Bool _isTopHit;
    SPSearchQueryContext *_queryContext;
    SFSearchResult_SpotlightExtras *_result;
    NSArray *_matchedStrings;
}

+ (struct CGSize)defaultThumbnailSize;
+ (void)setMaxLinesForDescriptions:(id)arg1;
+ (id)richTextsFromStrings:(id)arg1;
+ (_Bool)isCoreSpotlightResult;
+ (id)bundleId;
+ (_Bool)supportsResult:(id)arg1;
+ (id)resultBuilderWithResult:(id)arg1;
+ (Class)resultBuilderClassForResult:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *matchedStrings; // @synthesize matchedStrings=_matchedStrings;
@property(retain, nonatomic) SFSearchResult_SpotlightExtras *result; // @synthesize result=_result;
@property(retain, nonatomic) SPSearchQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(nonatomic) _Bool isTopHit; // @synthesize isTopHit=_isTopHit;
- (_Bool)buildButtonItemsAreTrailing;
- (_Bool)buildPreventThumbnailImageScaling;
- (id)buildCommand;
- (id)buildButtonItems;
- (id)buildHighlightedMatchedTextWithTitle:(id)arg1 headTruncation:(_Bool)arg2;
- (id)buildAction;
- (id)buildTrailingBottomText;
- (id)buildTrailingMiddleText;
- (id)buildTrailingTopText;
- (id)buildFootnote;
- (id)buildDescriptions;
- (id)buildSecondaryTitleImage;
- (_Bool)buildSecondaryTitleIsDetached;
- (id)buildSecondaryTitle;
- (id)buildTitle;
- (id)buildThumbnail;
- (id)buildPunchouts;
- (id)buildPreviewButtonItems;
- (id)buildDetailedRowCardSection;
- (void)buildDefaultPropertiesForCardSection:(id)arg1;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildInlineCardSection;
- (id)buildCompactCardSection;
- (id)buildInlineCardSections;
- (id)buildCompactCardSections;
- (id)buildInlineCard;
- (id)buildCompactCard;
- (id)buildResult;
- (id)coreSpotlightId;
- (id)resultAppBundleId;
- (id)initWithResult:(id)arg1;

@end
