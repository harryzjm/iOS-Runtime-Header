//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBRichText-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBText;

@interface _SFPBRichText : PBCodable <_SFPBRichText, NSSecureCoding>
{
    _SFPBText *_text;
    _SFPBGraphicalFloat *_starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *formattedTextPieces; // @synthesize formattedTextPieces=_formattedTextPieces;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(retain, nonatomic) _SFPBGraphicalFloat *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) _SFPBText *text; // @synthesize text=_text;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)formattedTextPiecesAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedTextPiecesCount;
- (void)addFormattedTextPieces:(id)arg1;
- (void)clearFormattedTextPieces;
- (id)iconsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcons:(id)arg1;
- (void)clearIcons;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
