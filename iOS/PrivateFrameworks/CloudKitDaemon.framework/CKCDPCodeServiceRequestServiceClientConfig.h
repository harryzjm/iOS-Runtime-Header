//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying>
{
    NSString *_host;
    unsigned int _port;
    _Bool _useTls;
    struct {
        unsigned int port:1;
        unsigned int useTls:1;
    } _has;
}

@property(nonatomic) _Bool useTls; // @synthesize useTls=_useTls;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
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
@property(nonatomic) _Bool hasUseTls;
@property(nonatomic) _Bool hasPort;
@property(readonly, nonatomic) _Bool hasHost;

@end
