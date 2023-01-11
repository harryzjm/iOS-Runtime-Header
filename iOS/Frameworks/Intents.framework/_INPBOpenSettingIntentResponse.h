//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBOpenSettingIntentResponse-Protocol.h>

@class NSString;

@interface _INPBOpenSettingIntentResponse : PBCodable <_INPBOpenSettingIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_errorDetail;
    NSString *_punchoutUrl;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *punchoutUrl; // @synthesize punchoutUrl=_punchoutUrl;
@property(copy, nonatomic) NSString *errorDetail; // @synthesize errorDetail=_errorDetail;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasPunchoutUrl;
@property(readonly, nonatomic) _Bool hasErrorDetail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
