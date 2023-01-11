//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriInstrumentation/NSSecureCoding-Protocol.h>
#import <SiriInstrumentation/SISchemaViewContainer-Protocol.h>

@class NSData, NSString;

@interface SISchemaViewContainer : PBCodable <SISchemaViewContainer, NSSecureCoding>
{
    NSString *_viewID;
    NSString *_snippetClass;
    NSString *_dialogIdentifier;
    NSString *_dialogPhase;
}

@property(copy, nonatomic) NSString *dialogPhase; // @synthesize dialogPhase=_dialogPhase;
@property(copy, nonatomic) NSString *dialogIdentifier; // @synthesize dialogIdentifier=_dialogIdentifier;
@property(copy, nonatomic) NSString *snippetClass; // @synthesize snippetClass=_snippetClass;
@property(copy, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
