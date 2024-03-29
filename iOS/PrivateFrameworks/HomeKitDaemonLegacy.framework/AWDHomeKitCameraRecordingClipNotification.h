//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraRecordingClipNotification : PBCodable
{
    unsigned long long _duration;
    unsigned long long _recordingEventTriggers;
    unsigned long long _sequenceNumber;
    unsigned long long _timestamp;
    NSString *_cameraUUID;
    NSString *_sessionUUID;
    struct {
        unsigned int duration:1;
        unsigned int recordingEventTriggers:1;
        unsigned int sequenceNumber:1;
        unsigned int timestamp:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned long long recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSString *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasRecordingEventTriggers;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(readonly, nonatomic) _Bool hasCameraUUID;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

