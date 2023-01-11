//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class NSDate, NSString;

@interface LPWalletPassMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility>
{
    NSString *_name;
    long long _style;
    NSDate *_eventDate;
    NSDate *_expirationDate;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
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
- (id)_subtitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
