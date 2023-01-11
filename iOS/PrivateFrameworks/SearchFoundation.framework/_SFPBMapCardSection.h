//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMapCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBLatLng, _SFPBMapRegion;

@interface _SFPBMapCardSection : PBCodable <_SFPBMapCardSection, NSSecureCoding>
{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _interactive;
    int _separatorStyle;
    int _sizeFormat;
    int _pinBehavior;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBLatLng *_location;
    _SFPBColor *_pinColor;
    NSString *_footnoteLabel;
    NSString *_footnote;
    _SFPBMapRegion *_boundingMapRegion;
    NSArray *_pins;
}

@property(copy, nonatomic) NSArray *pins; // @synthesize pins=_pins;
@property(nonatomic) int pinBehavior; // @synthesize pinBehavior=_pinBehavior;
@property(retain, nonatomic) _SFPBMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(nonatomic) int sizeFormat; // @synthesize sizeFormat=_sizeFormat;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) _SFPBColor *pinColor; // @synthesize pinColor=_pinColor;
@property(retain, nonatomic) _SFPBLatLng *location; // @synthesize location=_location;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)pinsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pinsCount;
- (void)addPins:(id)arg1;
- (void)clearPins;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

