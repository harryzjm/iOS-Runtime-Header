//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTextColumnSection-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding>
{
    CDStruct_82065ba4 _has;
    _Bool _textNoWrap;
    unsigned int _textWeight;
    NSArray *_textLines;
}

@property(nonatomic) unsigned int textWeight; // @synthesize textWeight=_textWeight;
@property(nonatomic) _Bool textNoWrap; // @synthesize textNoWrap=_textNoWrap;
@property(copy, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTextWeight;
@property(readonly, nonatomic) _Bool hasTextNoWrap;
- (id)textLinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textLinesCount;
- (void)addTextLines:(id)arg1;
- (void)clearTextLines;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
