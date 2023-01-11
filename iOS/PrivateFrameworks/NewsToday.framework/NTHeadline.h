//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTHeadlineProviding-Protocol.h>

@class NSDate, NSString, NSURL, NTHeadlinePersonalizationMetadata, NTPBHeadlineAdElement, NTPBHeadlineAnalyticsElement, NTPBHeadlineBackingElement, SFSearchResult;

@interface NTHeadline : NSObject <NTHeadlineProviding>
{
    _Bool _needsSeenStateTracking;
    _Bool _displaysWithLeadingCellAppearance;
    _Bool _supportsSavingForLater;
    _Bool _boundToContext;
    _Bool _hiddenFromFeeds;
    _Bool _hiddenFromAutoFavorites;
    NSString *_title;
    NSString *_titleCompact;
    NSString *_shortExcerpt;
    NSDate *_ageDisplayDate;
    NSString *_sourceName;
    NSString *_compactSourceName;
    NSString *_sourceTagID;
    NSURL *_sourceNameImageRemoteURL;
    double _sourceNameImageScale;
    NSURL *_compactSourceNameImageRemoteURL;
    NSURL *_thumbnailRemoteURL;
    unsigned long long _thumbnailSizePreset;
    NSURL *_webURL;
    NSURL *_NewsURL;
    NSString *_storyType;
    SFSearchResult *_searchResult;
    NSURL *_videoURL;
    double _videoDuration;
    NTPBHeadlineAnalyticsElement *_analyticsElement;
    NTPBHeadlineAdElement *_adElement;
    NTHeadlinePersonalizationMetadata *_personalizationMetadata;
    NTPBHeadlineBackingElement *_backingElement;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NSURL *_flintDocumentURL;
    NSString *_identifier;
    struct CGRect _thumbnailFocalFrame;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSURL *flintDocumentURL; // @synthesize flintDocumentURL=_flintDocumentURL;
@property(copy, nonatomic) NSURL *videoCallToActionURL; // @synthesize videoCallToActionURL=_videoCallToActionURL;
@property(copy, nonatomic) NSString *videoCallToActionTitle; // @synthesize videoCallToActionTitle=_videoCallToActionTitle;
@property(copy, nonatomic) NTPBHeadlineBackingElement *backingElement; // @synthesize backingElement=_backingElement;
@property(copy, nonatomic) NTHeadlinePersonalizationMetadata *personalizationMetadata; // @synthesize personalizationMetadata=_personalizationMetadata;
@property(copy, nonatomic) NTPBHeadlineAdElement *adElement; // @synthesize adElement=_adElement;
@property(copy, nonatomic) NTPBHeadlineAnalyticsElement *analyticsElement; // @synthesize analyticsElement=_analyticsElement;
@property(nonatomic, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites; // @synthesize hiddenFromAutoFavorites=_hiddenFromAutoFavorites;
@property(nonatomic, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds; // @synthesize hiddenFromFeeds=_hiddenFromFeeds;
@property(nonatomic, getter=isBoundToContext) _Bool boundToContext; // @synthesize boundToContext=_boundToContext;
@property(nonatomic) _Bool supportsSavingForLater; // @synthesize supportsSavingForLater=_supportsSavingForLater;
@property(nonatomic) _Bool displaysWithLeadingCellAppearance; // @synthesize displaysWithLeadingCellAppearance=_displaysWithLeadingCellAppearance;
@property(nonatomic) _Bool needsSeenStateTracking; // @synthesize needsSeenStateTracking=_needsSeenStateTracking;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property(copy, nonatomic) NSURL *NewsURL; // @synthesize NewsURL=_NewsURL;
@property(copy, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(nonatomic) struct CGRect thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(nonatomic) unsigned long long thumbnailSizePreset; // @synthesize thumbnailSizePreset=_thumbnailSizePreset;
@property(copy, nonatomic) NSURL *thumbnailRemoteURL; // @synthesize thumbnailRemoteURL=_thumbnailRemoteURL;
@property(copy, nonatomic) NSURL *compactSourceNameImageRemoteURL; // @synthesize compactSourceNameImageRemoteURL=_compactSourceNameImageRemoteURL;
@property(nonatomic) double sourceNameImageScale; // @synthesize sourceNameImageScale=_sourceNameImageScale;
@property(copy, nonatomic) NSURL *sourceNameImageRemoteURL; // @synthesize sourceNameImageRemoteURL=_sourceNameImageRemoteURL;
@property(copy, nonatomic) NSString *sourceTagID; // @synthesize sourceTagID=_sourceTagID;
@property(copy, nonatomic) NSString *compactSourceName; // @synthesize compactSourceName=_compactSourceName;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSDate *ageDisplayDate; // @synthesize ageDisplayDate=_ageDisplayDate;
@property(copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(copy, nonatomic) NSString *titleCompact; // @synthesize titleCompact=_titleCompact;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long itemType;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

