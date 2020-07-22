//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBDescriptionCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBText, _SFPBURL;

@interface _SFPBDescriptionCardSection : PBCodable <_SFPBDescriptionCardSection, NSSecureCoding>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int titleNoWrap:1;
        unsigned int titleWeight:1;
        unsigned int descriptionSize:1;
        unsigned int descriptionWeight:1;
        unsigned int descriptionExpand:1;
        unsigned int imageAlign:1;
        unsigned int textAlign:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _titleNoWrap;
    _Bool _descriptionExpand;
    int _separatorStyle;
    int _titleWeight;
    int _descriptionSize;
    int _descriptionWeight;
    int _imageAlign;
    int _textAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    _SFPBText *_descriptionText;
    NSString *_expandText;
    _SFPBImage *_image;
    NSString *_attributionText;
    _SFPBURL *_attributionURL;
    _SFPBImage *_attributionGlyph;
}

@property(retain, nonatomic) _SFPBImage *attributionGlyph; // @synthesize attributionGlyph=_attributionGlyph;
@property(retain, nonatomic) _SFPBURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property(copy, nonatomic) NSString *attributionText; // @synthesize attributionText=_attributionText;
@property(nonatomic) int textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(nonatomic) _Bool descriptionExpand; // @synthesize descriptionExpand=_descriptionExpand;
@property(nonatomic) int descriptionWeight; // @synthesize descriptionWeight=_descriptionWeight;
@property(nonatomic) int descriptionSize; // @synthesize descriptionSize=_descriptionSize;
@property(nonatomic) int titleWeight; // @synthesize titleWeight=_titleWeight;
@property(nonatomic) _Bool titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *expandText; // @synthesize expandText=_expandText;
@property(retain, nonatomic) _SFPBText *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
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
@property(readonly, nonatomic) _Bool hasAttributionGlyph;
@property(readonly, nonatomic) _Bool hasAttributionURL;
@property(readonly, nonatomic) _Bool hasAttributionText;
@property(readonly, nonatomic) _Bool hasTextAlign;
@property(readonly, nonatomic) _Bool hasImageAlign;
@property(readonly, nonatomic) _Bool hasDescriptionExpand;
@property(readonly, nonatomic) _Bool hasDescriptionWeight;
@property(readonly, nonatomic) _Bool hasDescriptionSize;
@property(readonly, nonatomic) _Bool hasTitleWeight;
@property(readonly, nonatomic) _Bool hasTitleNoWrap;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasExpandText;
@property(readonly, nonatomic) _Bool hasDescriptionText;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
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

