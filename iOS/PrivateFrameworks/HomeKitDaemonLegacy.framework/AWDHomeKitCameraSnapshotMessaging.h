//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraSnapshotMessaging : PBCodable
{
    unsigned int _receivedSnapshotRequest;
    unsigned int _sentSnapshotRequest;
    unsigned int _sentSnapshotResponse;
    struct {
        unsigned int receivedSnapshotRequest:1;
        unsigned int sentSnapshotRequest:1;
        unsigned int sentSnapshotResponse:1;
    } _has;
}

@property(nonatomic) unsigned int sentSnapshotResponse; // @synthesize sentSnapshotResponse=_sentSnapshotResponse;
@property(nonatomic) unsigned int sentSnapshotRequest; // @synthesize sentSnapshotRequest=_sentSnapshotRequest;
@property(nonatomic) unsigned int receivedSnapshotRequest; // @synthesize receivedSnapshotRequest=_receivedSnapshotRequest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSentSnapshotResponse;
@property(nonatomic) _Bool hasSentSnapshotRequest;
@property(nonatomic) _Bool hasReceivedSnapshotRequest;

@end

