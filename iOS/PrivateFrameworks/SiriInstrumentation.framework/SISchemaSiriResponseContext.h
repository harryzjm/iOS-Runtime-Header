//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaSiriResponseContext : PBCodable
{
    NSString *_dialogPhase;
    int _presentationType;
    int _siriResponseMode;
    struct {
        unsigned int presentationType:1;
        unsigned int siriResponseMode:1;
    } _has;
    _Bool _hasDialogPhase;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasDialogPhase; // @synthesize hasDialogPhase=_hasDialogPhase;
@property(nonatomic) int siriResponseMode; // @synthesize siriResponseMode=_siriResponseMode;
@property(nonatomic) int presentationType; // @synthesize presentationType=_presentationType;
@property(copy, nonatomic) NSString *dialogPhase; // @synthesize dialogPhase=_dialogPhase;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSiriResponseMode;
@property(nonatomic) _Bool hasPresentationType;

@end
