//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSString;

@interface NWPBHostEndpoint : PBCodable <NSCopying>
{
    NSString *_hostname;
    NSString *_port;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPort;
@property(readonly, nonatomic) _Bool hasHostname;

@end
