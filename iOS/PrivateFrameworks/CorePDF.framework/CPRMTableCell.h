//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPRMTable, NSString;

@interface CPRMTableCell : NSObject
{
    NSString *_contents;
    CPRMTableCell *_nextCellInColumn;
    CPRMTableCell *_nextCellInRow;
    CPRMTable *_table;
    struct CGPDFNode *_tableCellNode;
}

@property struct CGPDFNode *tableCellNode; // @synthesize tableCellNode=_tableCellNode;
@property CPRMTable *table; // @synthesize table=_table;
@property(retain) CPRMTableCell *nextCellInRow; // @synthesize nextCellInRow=_nextCellInRow;
@property(retain) CPRMTableCell *nextCellInColumn; // @synthesize nextCellInColumn=_nextCellInColumn;
- (struct CGColor *)backgroundColor;
- (unsigned long long)column;
- (unsigned long long)row;
- (id)contents;
- (struct CGRect)bounds;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (void)dealloc;

@end
