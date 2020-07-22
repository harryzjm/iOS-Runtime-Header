//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying>
{
    unsigned int _receivedImage;
    unsigned int _sentImage;
    struct {
        unsigned int receivedImage:1;
        unsigned int sentImage:1;
    } _has;
}

@property(nonatomic) unsigned int receivedImage; // @synthesize receivedImage=_receivedImage;
@property(nonatomic) unsigned int sentImage; // @synthesize sentImage=_sentImage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasReceivedImage;
@property(nonatomic) _Bool hasSentImage;

@end

