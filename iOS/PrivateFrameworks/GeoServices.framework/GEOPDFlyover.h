//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOPDFlyover : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEOPDCameraPathFrame *_cameraPaths;
    unsigned long long _cameraPathsCount;
    unsigned long long _cameraPathsSpace;
    struct GEOPDLabelFrame *_labelFrames;
    unsigned long long _labelFramesCount;
    unsigned long long _labelFramesSpace;
    NSMutableArray *_labels;
    NSMutableArray *_notificationMessages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _useSplines;
    struct {
        unsigned int has_useSplines:1;
        unsigned int read_cameraPaths:1;
        unsigned int read_labelFrames:1;
        unsigned int read_labels:1;
        unsigned int read_notificationMessages:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)notificationMessageType;
+ (Class)labelType;
+ (id)flyoverForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)notificationMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationMessagesCount;
- (void)addNotificationMessage:(id)arg1;
- (void)clearNotificationMessages;
@property(retain, nonatomic) NSMutableArray *notificationMessages;
- (id)labelAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (void)addLabel:(id)arg1;
- (void)clearLabels;
@property(retain, nonatomic) NSMutableArray *labels;
- (void)setLabelFrames:(struct GEOPDLabelFrame *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLabelFrame)labelFrameAtIndex:(unsigned long long)arg1;
- (void)addLabelFrame:(struct GEOPDLabelFrame)arg1;
- (void)clearLabelFrames;
@property(readonly, nonatomic) struct GEOPDLabelFrame *labelFrames;
@property(readonly, nonatomic) unsigned long long labelFramesCount;
@property(nonatomic) _Bool hasUseSplines;
@property(nonatomic) _Bool useSplines;
- (void)setCameraPaths:(struct GEOPDCameraPathFrame *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDCameraPathFrame)cameraPathAtIndex:(unsigned long long)arg1;
- (void)addCameraPath:(struct GEOPDCameraPathFrame)arg1;
- (void)clearCameraPaths;
@property(readonly, nonatomic) struct GEOPDCameraPathFrame *cameraPaths;
@property(readonly, nonatomic) unsigned long long cameraPathsCount;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)bestLocalizedAnnouncementMessage;
- (id)bestLocalizedLabelAtIndex:(unsigned long long)arg1;

@end
