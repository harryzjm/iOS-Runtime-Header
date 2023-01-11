//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBAppLaunchEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;
    double _duration;
    NSString *_bundleID;
    NSString *_launchReason;
    int _launchType;
    _Bool _string;
    struct {
        unsigned int absoluteTimestamp:1;
        unsigned int duration:1;
        unsigned int launchType:1;
        unsigned int string:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(nonatomic) _Bool string; // @synthesize string=_string;
@property(retain, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(nonatomic) _Bool hasString;
- (int)StringAsLaunchType:(id)arg1;
- (id)launchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLaunchType;
@property(nonatomic) int launchType; // @synthesize launchType=_launchType;
@property(readonly, nonatomic) _Bool hasLaunchReason;

@end
