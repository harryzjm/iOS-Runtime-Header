//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BookDataStore/NSCopying-Protocol.h>

@class BCAnnotationRange, NSData, NSString;

@interface BCProtoAnnotation : PBCodable <NSCopying>
{
    double _creationDate;
    double _locationModificationDate;
    double _modificationDate;
    double _userModificationDate;
    NSString *_annotationVersion;
    NSString *_assetVersion;
    NSString *_attachments;
    NSString *_chapterTitle;
    NSString *_creatorIdentifier;
    NSString *_futureProofing11;
    NSString *_futureProofing12;
    NSString *_locationCFIString;
    NSString *_note;
    NSString *_physicalPageNumber;
    int _plAbsolutePhysicalLocation;
    int _plLocationRangeEnd;
    int _plLocationRangeStart;
    NSString *_plLocationStorageUUID;
    NSData *_plUserData;
    float _readingProgress;
    float _readingProgressHighWaterMark;
    NSString *_representativeText;
    NSString *_selectedText;
    BCAnnotationRange *_selectedTextRange;
    unsigned int _style;
    unsigned int _type;
    NSString *_uuid;
    _Bool _deleted;
    _Bool _isUnderline;
    _Bool _spineIndexUpdated;
    struct {
        unsigned int locationModificationDate:1;
        unsigned int userModificationDate:1;
        unsigned int plAbsolutePhysicalLocation:1;
        unsigned int plLocationRangeEnd:1;
        unsigned int plLocationRangeStart:1;
        unsigned int readingProgress:1;
        unsigned int readingProgressHighWaterMark:1;
        unsigned int style:1;
        unsigned int type:1;
        unsigned int deleted:1;
        unsigned int isUnderline:1;
        unsigned int spineIndexUpdated:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double locationModificationDate; // @synthesize locationModificationDate=_locationModificationDate;
@property(retain, nonatomic) NSData *plUserData; // @synthesize plUserData=_plUserData;
@property(retain, nonatomic) NSString *plLocationStorageUUID; // @synthesize plLocationStorageUUID=_plLocationStorageUUID;
@property(nonatomic) int plLocationRangeStart; // @synthesize plLocationRangeStart=_plLocationRangeStart;
@property(nonatomic) int plLocationRangeEnd; // @synthesize plLocationRangeEnd=_plLocationRangeEnd;
@property(nonatomic) int plAbsolutePhysicalLocation; // @synthesize plAbsolutePhysicalLocation=_plAbsolutePhysicalLocation;
@property(retain, nonatomic) NSString *futureProofing12; // @synthesize futureProofing12=_futureProofing12;
@property(retain, nonatomic) NSString *futureProofing11; // @synthesize futureProofing11=_futureProofing11;
@property(nonatomic) float readingProgress; // @synthesize readingProgress=_readingProgress;
@property(nonatomic) _Bool spineIndexUpdated; // @synthesize spineIndexUpdated=_spineIndexUpdated;
@property(nonatomic) float readingProgressHighWaterMark; // @synthesize readingProgressHighWaterMark=_readingProgressHighWaterMark;
@property(retain, nonatomic) BCAnnotationRange *selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(nonatomic) double userModificationDate; // @synthesize userModificationDate=_userModificationDate;
@property(retain, nonatomic) NSString *chapterTitle; // @synthesize chapterTitle=_chapterTitle;
@property(retain, nonatomic) NSString *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property(retain, nonatomic) NSString *annotationVersion; // @synthesize annotationVersion=_annotationVersion;
@property(retain, nonatomic) NSString *physicalPageNumber; // @synthesize physicalPageNumber=_physicalPageNumber;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(retain, nonatomic) NSString *representativeText; // @synthesize representativeText=_representativeText;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSString *locationCFIString; // @synthesize locationCFIString=_locationCFIString;
@property(nonatomic) _Bool isUnderline; // @synthesize isUnderline=_isUnderline;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSString *creatorIdentifier; // @synthesize creatorIdentifier=_creatorIdentifier;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocationModificationDate;
@property(readonly, nonatomic) _Bool hasPlUserData;
@property(readonly, nonatomic) _Bool hasPlLocationStorageUUID;
@property(nonatomic) _Bool hasPlLocationRangeStart;
@property(nonatomic) _Bool hasPlLocationRangeEnd;
@property(nonatomic) _Bool hasPlAbsolutePhysicalLocation;
@property(readonly, nonatomic) _Bool hasFutureProofing12;
@property(readonly, nonatomic) _Bool hasFutureProofing11;
@property(nonatomic) _Bool hasReadingProgress;
@property(nonatomic) _Bool hasSpineIndexUpdated;
@property(nonatomic) _Bool hasReadingProgressHighWaterMark;
@property(readonly, nonatomic) _Bool hasSelectedTextRange;
@property(nonatomic) _Bool hasUserModificationDate;
@property(readonly, nonatomic) _Bool hasChapterTitle;
@property(readonly, nonatomic) _Bool hasAttachments;
@property(readonly, nonatomic) _Bool hasAssetVersion;
@property(readonly, nonatomic) _Bool hasAnnotationVersion;
@property(readonly, nonatomic) _Bool hasPhysicalPageNumber;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasStyle;
@property(readonly, nonatomic) _Bool hasSelectedText;
@property(readonly, nonatomic) _Bool hasRepresentativeText;
@property(readonly, nonatomic) _Bool hasNote;
@property(readonly, nonatomic) _Bool hasLocationCFIString;
@property(nonatomic) _Bool hasIsUnderline;
@property(nonatomic) _Bool hasDeleted;

@end
