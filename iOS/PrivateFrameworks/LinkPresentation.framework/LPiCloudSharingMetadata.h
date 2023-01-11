//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class LPImage, NSString;

@interface LPiCloudSharingMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility>
{
    NSString *_applicationBundleIdenfier;
    NSString *_application;
    NSString *_title;
    LPImage *_icon;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (_Bool)supportsSecureCoding;
+ (id)_bundleIdentifierMap;
- (void).cxx_destruct;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *application; // @synthesize application=_application;
@property(copy, nonatomic) NSString *applicationBundleIdenfier; // @synthesize applicationBundleIdenfier=_applicationBundleIdenfier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)_bottomCaptionStringWithApplicationName:(id)arg1;
- (id)_topCaptionStringWithApplicationName:(id)arg1;
- (id)localizedApplicationName;
- (id)computeIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
