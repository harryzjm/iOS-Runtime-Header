//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;
    NSString *_sourceAppBundleId;
    NSString *_uriScheme;
    struct {
        unsigned int sessionId:1;
    } _has;
}

@property(retain, nonatomic) NSString *uriScheme; // @synthesize uriScheme=_uriScheme;
@property(retain, nonatomic) NSString *sourceAppBundleId; // @synthesize sourceAppBundleId=_sourceAppBundleId;
@property(nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
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
@property(readonly, nonatomic) _Bool hasUriScheme;
@property(readonly, nonatomic) _Bool hasSourceAppBundleId;
@property(nonatomic) _Bool hasSessionId;

@end

