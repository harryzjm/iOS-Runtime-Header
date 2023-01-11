//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTableRowCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFTableAlignmentSchema;

@interface SFTableRowCardSection <SFTableRowCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_dff33cb6 _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isSubHeader;
    _Bool _reducedRowHeight;
    _Bool _alignRowsToHeader;
    int _separatorStyle;
    int _verticalAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSArray *_richData;
    NSString *_tableIdentifier;
    SFTableAlignmentSchema *_alignmentSchema;
    NSArray *_data;
    NSString *_tabGroupIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool alignRowsToHeader; // @synthesize alignRowsToHeader=_alignRowsToHeader;
@property(nonatomic) int verticalAlign; // @synthesize verticalAlign=_verticalAlign;
@property(nonatomic) _Bool reducedRowHeight; // @synthesize reducedRowHeight=_reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier; // @synthesize tabGroupIdentifier=_tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader; // @synthesize isSubHeader=_isSubHeader;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema; // @synthesize alignmentSchema=_alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier; // @synthesize tableIdentifier=_tableIdentifier;
@property(copy, nonatomic) NSArray *richData; // @synthesize richData=_richData;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasAlignRowsToHeader;
- (_Bool)hasVerticalAlign;
- (_Bool)hasReducedRowHeight;
- (_Bool)hasIsSubHeader;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasHasTopPadding;
- (_Bool)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;

@end

