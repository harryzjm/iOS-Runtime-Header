//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADTable, OADTableRow;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper
{
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned long long mRowIndex;
}

- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (unsigned long long)cellCount;
- (float)height;
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;

@end
