//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@class NSString;

@interface WBSAnalyticsSafariAutoFillAuthenticationEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _category;
    int _client;
    NSString *_errorCode;
    NSString *_errorDomain;
    int _status;
    _Bool _onPageLoad;
    struct {
        unsigned int timestamp:1;
        unsigned int category:1;
        unsigned int client:1;
        unsigned int status:1;
        unsigned int onPageLoad:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) _Bool onPageLoad; // @synthesize onPageLoad=_onPageLoad;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasOnPageLoad;
- (int)StringAsClient:(id)arg1;
- (id)clientAsString:(int)arg1;
@property(nonatomic) _Bool hasClient;
@property(nonatomic) int client; // @synthesize client=_client;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) _Bool hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
@property(nonatomic) _Bool hasTimestamp;

@end

