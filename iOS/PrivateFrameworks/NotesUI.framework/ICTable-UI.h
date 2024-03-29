//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICTable.h>

@interface ICTable (UI)
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2 deepCopyInlineAttachments:(_Bool)arg3 note:(id)arg4 parentAttachment:(id)arg5;
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2;
- (id)textStorageForColumn:(id)arg1;
- (void)enumerateTextStoragesForColumnIndexes:(id)arg1 rowIndexes:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)documentForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2;
- (id)p_attributedStringForCell:(id)arg1 inTable:(id)arg2 atColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 shouldFilter:(_Bool)arg5 context:(id)arg6;
- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2 context:(id)arg3 forPrinting:(_Bool)arg4;
- (id)attributedStringWithNSTextTablesForColumns:(id)arg1 rows:(id)arg2 context:(id)arg3;
@end

