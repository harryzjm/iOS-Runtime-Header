//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTextColumnsCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@interface _SFPBTextColumnsCardSection : PBCodable <_SFPBTextColumnsCardSection, NSSecureCoding>
{
    CDStruct_9787ad25 _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    int _separatorStyle;
    unsigned int _titleWeight;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_title;
    NSArray *_columns;
}

@property(copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(nonatomic) unsigned int titleWeight; // @synthesize titleWeight=_titleWeight;
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
- (id)columnsAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnsCount;
- (void)addColumns:(id)arg1;
- (void)clearColumns;
@property(readonly, nonatomic) _Bool hasTitleWeight;
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
