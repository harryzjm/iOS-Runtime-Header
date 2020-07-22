//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CLPMicroLocationMeasurementEntry : PBCodable <NSCopying>
{
    double _scanCFTimestamp;
    unsigned long long _scanMCTimestamp;
    int _flags;
    NSData *_measurementProtobuf;
    NSString *_recordingUUID;
    struct {
        unsigned int scanCFTimestamp:1;
        unsigned int scanMCTimestamp:1;
        unsigned int flags:1;
    } _has;
}

@property(retain, nonatomic) NSData *measurementProtobuf; // @synthesize measurementProtobuf=_measurementProtobuf;
@property(nonatomic) unsigned long long scanMCTimestamp; // @synthesize scanMCTimestamp=_scanMCTimestamp;
@property(nonatomic) double scanCFTimestamp; // @synthesize scanCFTimestamp=_scanCFTimestamp;
@property(retain, nonatomic) NSString *recordingUUID; // @synthesize recordingUUID=_recordingUUID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsFlags:(id)arg1;
- (id)flagsAsString:(int)arg1;
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) _Bool hasMeasurementProtobuf;
@property(nonatomic) _Bool hasScanMCTimestamp;
@property(nonatomic) _Bool hasScanCFTimestamp;
@property(readonly, nonatomic) _Bool hasRecordingUUID;

@end

