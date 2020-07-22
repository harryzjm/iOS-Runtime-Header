//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlaySlideshowSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _repeat;
    NSString *_sessionUUID;
    unsigned int _slideMs;
    int _status;
    NSString *_theme;
    NSString *_transition;
    struct {
        unsigned int timestamp:1;
        unsigned int repeat:1;
        unsigned int slideMs:1;
        unsigned int status:1;
    } _has;
}

@property(nonatomic) unsigned int slideMs; // @synthesize slideMs=_slideMs;
@property(nonatomic) unsigned int repeat; // @synthesize repeat=_repeat;
@property(retain, nonatomic) NSString *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSlideMs;
@property(nonatomic) _Bool hasRepeat;
@property(readonly, nonatomic) _Bool hasTransition;
@property(readonly, nonatomic) _Bool hasTheme;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

