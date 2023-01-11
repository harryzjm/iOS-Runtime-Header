//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSUMultipleChoiceListChoiceProviding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTPopUpMenuModel <NSCopying, TSUMultipleChoiceListChoiceProviding>
{
    NSArray *_items;
    unsigned long long _count;
}

+ (_Bool)needsObjectUUID;
+ (id)popupMenuModelReorderingModel:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
+ (id)popupMenuModelEditingItemInModel:(id)arg1 index:(unsigned long long)arg2 newContent:(id)arg3;
+ (id)popupMenuModelDeletingItemFromModel:(id)arg1 index:(unsigned long long)arg2;
+ (id)cellValueFromCell:(id)arg1 locale:(id)arg2;
+ (id)p_cellValueFromCellWithCustomFormat:(id)arg1 locale:(id)arg2;
+ (id)p_PopUpMenuModelDefaultWithContext:(id)arg1 locale:(id)arg2;
+ (void)p_appendChoices:(id)arg1 uniquelyToChoices:(id)arg2;
+ (id)popupMenuModelFromTable:(id)arg1 region:(id)arg2 initialValue:(_Bool *)arg3 overflow:(_Bool *)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct PopUpMenuModel *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PopUpMenuModel *)arg1;
- (id)popUpItemFromDate:(id)arg1 format:(id)arg2;
- (id)popUpItemFromString:(id)arg1;
- (id)popUpItemFromBoolean:(_Bool)arg1;
- (id)popUpItemFromNumber:(double)arg1 format:(id)arg2;
- (id)displayStringAtIndex:(unsigned long long)arg1;
- (_Bool)booleanAtIndex:(unsigned long long)arg1;
- (id)formatAtIndex:(unsigned long long)arg1;
- (id)dateAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (double)numberAtIndex:(unsigned long long)arg1;
- (int)valueTypeOfItemAtIndex:(unsigned long long)arg1;
- (_Bool)p_booleanForListItem:(id)arg1;
- (id)p_dateForListItem:(id)arg1;
- (id)p_stringForListItem:(id)arg1;
- (double)p_numberForListItem:(id)arg1;
- (int)p_mcListTypeOfListItem:(id)arg1;
- (int)p_mcListTypeForArgType:(int)arg1;
- (id)p_listItemAtIndex:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToChoices:(id)arg1;
- (id)choices;
- (void)didInitFromSOS;
- (id)initWithItems:(id)arg1 context:(id)arg2;

@end

