//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_baseDocumentationURL;
    NSString *_releaseNotesSummaryFileName;
    NSString *_releaseNotesFileName;
    NSString *_licenseAgreementFileName;
    NSString *_primaryLanguage;
    NSNumber *_slaVersion;
    NSString *_humanReadableUpdateName;
    NSURL *_releaseNotesSummaryURL;
    NSURL *_releaseNotesURL;
    NSURL *_licenseAgreementURL;
    NSMutableDictionary *_cachedData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *slaVersion; // @synthesize slaVersion=_slaVersion;
@property(retain, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(retain, nonatomic) NSString *humanReadableUpdateName; // @synthesize humanReadableUpdateName=_humanReadableUpdateName;
@property(retain, nonatomic) NSURL *licenseAgreementURL; // @synthesize licenseAgreementURL=_licenseAgreementURL;
@property(retain, nonatomic) NSString *licenseAgreementFileName; // @synthesize licenseAgreementFileName=_licenseAgreementFileName;
@property(retain, nonatomic) NSURL *releaseNotesSummaryURL; // @synthesize releaseNotesSummaryURL=_releaseNotesSummaryURL;
@property(retain, nonatomic) NSString *releaseNotesSummaryFileName; // @synthesize releaseNotesSummaryFileName=_releaseNotesSummaryFileName;
@property(retain, nonatomic) NSURL *releaseNotesURL; // @synthesize releaseNotesURL=_releaseNotesURL;
@property(retain, nonatomic) NSString *releaseNotesFileName; // @synthesize releaseNotesFileName=_releaseNotesFileName;
@property(retain, nonatomic) NSURL *baseDocumentationURL; // @synthesize baseDocumentationURL=_baseDocumentationURL;
- (id)localizedDocumentationStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (id)_localizedResourceURLForDocumentationAsset:(id)arg1 resource:(id)arg2;
- (id)_cachedDocumentationDataForURL:(id)arg1;
- (void)_resetIfNecessary;
- (id)localizedURLFromBundle:(struct __CFBundle *)arg1 resource:(id)arg2;
- (id)localizedStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (void)_clearTransientDocumentationData;
- (id)description;
- (id)pngImageDataFromBundle:(struct __CFBundle *)arg1 fileName:(id)arg2;
- (id)_getSUImage:(id)arg1;
- (id)getFullWidthImage;
- (id)getIconImage;
- (_Bool)hasAnyDocumentation;
- (id)licenseAgreement;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationURL:(id)arg1;
- (id)init;
- (void)dealloc;

@end

