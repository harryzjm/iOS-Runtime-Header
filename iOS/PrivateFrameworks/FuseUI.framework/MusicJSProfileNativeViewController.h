//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FuseUI/MusicJSProfileNativeViewController-Protocol.h>
#import <FuseUI/SKUIDOMFeature-Protocol.h>

@class IKAppContext, IKAppDocument, IKDOMDocument, IKJSNavigationDocument, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol MusicJSProfileNativeViewControllerDelegate;

@interface MusicJSProfileNativeViewController <MusicJSProfileNativeViewController, SKUIDOMFeature>
{
    IKDOMDocument *_relatedContentJSDocument;
    NSMutableDictionary *_segmentJSDocuments;
    NSMutableDictionary *_segmentDocuments;
    NSMutableDictionary *_segmentDocumentOptions;
    _Bool _socialHidden;
    id <MusicJSProfileNativeViewControllerDelegate> _delegate;
    NSDictionary *_availableContentFlags;
    IKAppDocument *_biographyEditorDocument;
    NSDictionary *_biographyEditorDocumentOptions;
    NSString *_followerCountText;
    NSString *_followersText;
    long long _numberOfFollowers;
    IKAppDocument *_moreRelatedContentDocument;
    NSDictionary *_moreRelatedContentDocumentOptions;
    NSDictionary *_profileEntityValueProviderData;
    IKAppDocument *_relatedContentDocument;
    NSDictionary *_relatedContentDocumentOptions;
    NSDictionary *_reportingInformation;
    NSString *_selectedSegmentIdentifier;
    IKAppDocument *_shareDocument;
    NSDictionary *_shareDocumentOptions;
    NSArray *_visibleSegments;
}

+ (id)featureName;
@property(nonatomic, getter=isSocialHidden) _Bool socialHidden; // @synthesize socialHidden=_socialHidden;
@property(readonly, nonatomic) NSArray *visibleSegments; // @synthesize visibleSegments=_visibleSegments;
@property(readonly, nonatomic) NSDictionary *shareDocumentOptions; // @synthesize shareDocumentOptions=_shareDocumentOptions;
@property(readonly, nonatomic) IKAppDocument *shareDocument; // @synthesize shareDocument=_shareDocument;
@property(readonly, nonatomic) NSString *selectedSegmentIdentifier; // @synthesize selectedSegmentIdentifier=_selectedSegmentIdentifier;
@property(readonly, nonatomic) NSDictionary *reportingInformation; // @synthesize reportingInformation=_reportingInformation;
@property(readonly, nonatomic) NSDictionary *relatedContentDocumentOptions; // @synthesize relatedContentDocumentOptions=_relatedContentDocumentOptions;
@property(readonly, nonatomic) IKAppDocument *relatedContentDocument; // @synthesize relatedContentDocument=_relatedContentDocument;
@property(readonly, nonatomic) NSDictionary *profileEntityValueProviderData; // @synthesize profileEntityValueProviderData=_profileEntityValueProviderData;
@property(readonly, nonatomic) NSDictionary *moreRelatedContentDocumentOptions; // @synthesize moreRelatedContentDocumentOptions=_moreRelatedContentDocumentOptions;
@property(readonly, nonatomic) IKAppDocument *moreRelatedContentDocument; // @synthesize moreRelatedContentDocument=_moreRelatedContentDocument;
@property(readonly, nonatomic) long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
@property(readonly, nonatomic) NSString *followersText; // @synthesize followersText=_followersText;
@property(readonly, nonatomic) NSString *followerCountText; // @synthesize followerCountText=_followerCountText;
@property(readonly, nonatomic) NSDictionary *biographyEditorDocumentOptions; // @synthesize biographyEditorDocumentOptions=_biographyEditorDocumentOptions;
@property(readonly, nonatomic) IKAppDocument *biographyEditorDocument; // @synthesize biographyEditorDocument=_biographyEditorDocument;
@property(readonly, nonatomic) NSDictionary *availableContentFlags; // @synthesize availableContentFlags=_availableContentFlags;
@property(nonatomic) __weak id <MusicJSProfileNativeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enumerateSegmentIdentifiersAndDocumentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)documentOptionsForSegmentIdentifier:(id)arg1;
- (id)documentForSegmentIdentifier:(id)arg1;
- (_Bool)supportsRelatedContentDocument;
- (void)setSegmentDocument:(id)arg1:(id)arg2:(id)arg3;
- (void)setVisibleSegments:(id)arg1;
- (void)setSelectedSegment:(id)arg1;
- (void)setFollowerCountText:(id)arg1:(id)arg2;
- (void)setNumberOfFollowers:(unsigned long long)arg1;
- (void)setRelatedContentDocument:(id)arg1:(id)arg2;
- (void)setReportingInformation:(id)arg1;
- (void)setProfileEntityValueProvider:(id)arg1;
- (void)setMoreRelatedContentDocument:(id)arg1:(id)arg2;
- (void)setAvailableContentFlags:(id)arg1;
- (void)presentShareDocument:(id)arg1:(id)arg2;
- (void)presentBiographyEditorDocument:(id)arg1:(id)arg2;
- (void)navigationDocumentDidChange;
- (id)nativeViewIdentifier;

// Remaining properties
@property(readonly, nonatomic) __weak IKAppContext *appContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *featureName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property(readonly) Class superclass;

@end

