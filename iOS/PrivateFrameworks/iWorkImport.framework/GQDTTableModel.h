//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDTTableModel : NSObject <GQDNameMappable>
{
    unsigned short mColumnCount;
    unsigned short mRowCount;
    struct __CFString *mName;
    _Bool mNameVisible;
    struct __CFArray *mColumnWidths;
    struct __CFArray *mRowHeights;
    struct __CFArray *mColumnVisibilities;
    struct __CFArray *mRowVisibilities;
    unsigned short mHeaderRowCount;
    unsigned short mHeaderColumnCount;
    unsigned short mFooterRowCount;
    struct __CFArray *mCells;
    struct __CFArray *mColumnGroupDisplayTypes;
    int mNumGroupLevels;
}

+ (const struct StateSpec *)stateForReading;
- (void)setNumGroupLevels:(int)arg1;
- (int)numGroupLevels;
- (unsigned short)firstVisibleColumn;
- (_Bool)hasGroupDisplayType:(unsigned short)arg1 level:(int)arg2 displayType:(int *)arg3 isTypeVisible:(_Bool *)arg4;
- (int)typeOfVectorAlongGridline:(unsigned short)arg1 offset:(unsigned short)arg2 length:(unsigned short)arg3 vertical:(_Bool)arg4;
- (unsigned short)footerRowCount;
- (unsigned short)headerColumnCount;
- (unsigned short)headerRowCount;
- (struct __CFArray *)cells;
- (id)cellAt:(unsigned short)arg1;
- (_Bool)visibilityForRow:(unsigned short)arg1;
- (_Bool)visibilityForColumn:(unsigned short)arg1;
- (float)heightForRow:(unsigned short)arg1;
- (float)widthForColumn:(unsigned short)arg1;
- (_Bool)isNameVisible;
- (struct __CFString *)name;
- (unsigned short)rowCount;
- (unsigned short)columnCount;
- (void)dealloc;
- (void)setCells:(struct __CFArray *)arg1;
- (int)addGroupLevelsFrom:(struct _xmlTextReader *)arg1;
- (int)addRowHeightFrom:(struct _xmlTextReader *)arg1;
- (int)addColumnWidthFrom:(struct _xmlTextReader *)arg1;
- (int)readAttributesForGrid:(struct _xmlTextReader *)arg1;
- (int)readAttributesForModel:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
