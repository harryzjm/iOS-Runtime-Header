//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPBOfflineServiceMetrics : PBCodable
{
    unsigned long long _startTimeMs;
    unsigned long long _stopTimeMs;
    int _serviceId;
    struct {
        unsigned int has_startTimeMs:1;
        unsigned int has_stopTimeMs:1;
        unsigned int has_serviceId:1;
    } _flags;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;

@end

