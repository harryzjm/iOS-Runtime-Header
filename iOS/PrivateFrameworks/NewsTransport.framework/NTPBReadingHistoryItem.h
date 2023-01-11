//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <NSCopying>
{
    double _listeningProgress;
    long long _maxVersionRead;
    long long _maxVersionSeen;
    long long _readCount;
    NSString *_articleID;
    NSString *_deviceID;
    NTPBDate *_firstSeenDate;
    NTPBDate *_firstSeenDateOfMaxVersionSeen;
    unsigned int _flags;
    NTPBDate *_lastListened;
    NTPBDate *_lastVisitedDate;
    NTPBDate *_listeningProgressSavedDate;
    NSString *_readingPosition;
    NTPBDate *_readingPositionSavedDate;
    NSString *_sourceChannelTagID;
    struct {
        unsigned int listeningProgress:1;
        unsigned int maxVersionRead:1;
        unsigned int maxVersionSeen:1;
        unsigned int readCount:1;
        unsigned int flags:1;
    } _has;
}

@property(retain, nonatomic) NTPBDate *readingPositionSavedDate; // @synthesize readingPositionSavedDate=_readingPositionSavedDate;
@property(retain, nonatomic) NTPBDate *listeningProgressSavedDate; // @synthesize listeningProgressSavedDate=_listeningProgressSavedDate;
@property(nonatomic) long long readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) NSString *readingPosition; // @synthesize readingPosition=_readingPosition;
@property(retain, nonatomic) NTPBDate *lastListened; // @synthesize lastListened=_lastListened;
@property(nonatomic) double listeningProgress; // @synthesize listeningProgress=_listeningProgress;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *sourceChannelTagID; // @synthesize sourceChannelTagID=_sourceChannelTagID;
@property(nonatomic) long long maxVersionSeen; // @synthesize maxVersionSeen=_maxVersionSeen;
@property(retain, nonatomic) NTPBDate *firstSeenDateOfMaxVersionSeen; // @synthesize firstSeenDateOfMaxVersionSeen=_firstSeenDateOfMaxVersionSeen;
@property(retain, nonatomic) NTPBDate *firstSeenDate; // @synthesize firstSeenDate=_firstSeenDate;
@property(nonatomic) long long maxVersionRead; // @synthesize maxVersionRead=_maxVersionRead;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NTPBDate *lastVisitedDate; // @synthesize lastVisitedDate=_lastVisitedDate;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasReadingPositionSavedDate;
@property(readonly, nonatomic) _Bool hasListeningProgressSavedDate;
@property(nonatomic) _Bool hasReadCount;
@property(readonly, nonatomic) _Bool hasReadingPosition;
@property(readonly, nonatomic) _Bool hasLastListened;
@property(nonatomic) _Bool hasListeningProgress;
@property(readonly, nonatomic) _Bool hasDeviceID;
@property(readonly, nonatomic) _Bool hasSourceChannelTagID;
@property(nonatomic) _Bool hasMaxVersionSeen;
@property(readonly, nonatomic) _Bool hasFirstSeenDateOfMaxVersionSeen;
@property(readonly, nonatomic) _Bool hasFirstSeenDate;
@property(nonatomic) _Bool hasMaxVersionRead;
@property(nonatomic) _Bool hasFlags;
@property(readonly, nonatomic) _Bool hasLastVisitedDate;
@property(readonly, nonatomic) _Bool hasArticleID;
- (void)dealloc;

@end
