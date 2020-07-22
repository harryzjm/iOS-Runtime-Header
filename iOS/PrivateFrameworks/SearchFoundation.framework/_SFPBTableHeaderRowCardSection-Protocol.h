//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBFormattedText, _SFPBPunchout, _SFPBTableAlignmentSchema;

@protocol _SFPBTableHeaderRowCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasAlignRowsToHeader;
@property(nonatomic) _Bool alignRowsToHeader;
@property(readonly, nonatomic) _Bool hasVerticalAlign;
@property(nonatomic) int verticalAlign;
@property(readonly, nonatomic) _Bool hasReducedRowHeight;
@property(nonatomic) _Bool reducedRowHeight;
@property(readonly, nonatomic) _Bool hasTabGroupIdentifier;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(readonly, nonatomic) _Bool hasIsSubHeader;
@property(nonatomic) _Bool isSubHeader;
@property(copy, nonatomic) NSArray *datas;
@property(readonly, nonatomic) _Bool hasAlignmentSchema;
@property(retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema;
@property(readonly, nonatomic) _Bool hasTableIdentifier;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(copy, nonatomic) NSString *type;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(nonatomic) _Bool hasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(nonatomic) _Bool canBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFormattedText *)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)addData:(_SFPBFormattedText *)arg1;
- (void)clearData;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end
