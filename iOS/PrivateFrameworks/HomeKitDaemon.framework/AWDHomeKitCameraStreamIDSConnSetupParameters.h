//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable
{
    unsigned int _connectionComplete;
    unsigned int _connectionRequested;
    struct {
        unsigned int connectionComplete:1;
        unsigned int connectionRequested:1;
    } _has;
}

@property(nonatomic) unsigned int connectionComplete; // @synthesize connectionComplete=_connectionComplete;
@property(nonatomic) unsigned int connectionRequested; // @synthesize connectionRequested=_connectionRequested;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasConnectionComplete;
@property(nonatomic) _Bool hasConnectionRequested;

@end

