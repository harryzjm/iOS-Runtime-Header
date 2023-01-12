//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPerformEntityQueryCommand-Protocol.h>

@class NSData, NSString, _SFPBSymbolImage;

@interface _SFPBPerformEntityQueryCommand : PBCodable <_SFPBPerformEntityQueryCommand, NSSecureCoding>
{
    int _entityType;
    NSString *_searchString;
    NSString *_tokenString;
    _SFPBSymbolImage *_symbolImage;
    NSString *_entityIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _SFPBSymbolImage *symbolImage; // @synthesize symbolImage=_symbolImage;
@property(copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
