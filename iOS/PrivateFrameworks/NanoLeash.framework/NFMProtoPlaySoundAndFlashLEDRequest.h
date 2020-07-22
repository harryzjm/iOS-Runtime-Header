//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoLeash/NSCopying-Protocol.h>

@interface NFMProtoPlaySoundAndFlashLEDRequest : PBRequest <NSCopying>
{
    double _timeStamp;
    CDStruct_a6914f10 _has;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimeStamp;

@end

