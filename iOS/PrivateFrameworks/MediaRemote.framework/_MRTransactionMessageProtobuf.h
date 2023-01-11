//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRTransactionPacketsProtobuf;

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _name;
    _MRTransactionPacketsProtobuf *_packets;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    struct {
        unsigned int name:1;
    } _has;
}

@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRTransactionPacketsProtobuf *packets; // @synthesize packets=_packets;
@property(nonatomic) unsigned long long name; // @synthesize name=_name;
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
@property(readonly, nonatomic) _Bool hasPlayerPath;
@property(readonly, nonatomic) _Bool hasPackets;
@property(nonatomic) _Bool hasName;

@end

