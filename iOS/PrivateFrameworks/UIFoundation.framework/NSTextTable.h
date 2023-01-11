//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSSecureCoding-Protocol.h>

@interface NSTextTable <NSSecureCoding>
{
    unsigned long long _numCols;
    unsigned long long _tableFlags;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void)drawBackgroundForBlock:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 characterRange:(struct _NSRange)arg4 layoutManager:(id)arg5;
- (_Bool)_missingColumnsForRowRange:(struct _NSRange)arg1 blockIndex:(unsigned long long)arg2 text:(id)arg3;
- (struct CGRect)boundsRectForBlock:(id)arg1 contentRect:(struct CGRect)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;
- (struct CGRect)_contentRectForCharRange:(struct _NSRange)arg1 textContainer:(id)arg2;
- (struct CGRect)rectForBlock:(id)arg1 layoutAtPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;
- (id)_descriptionAtIndex:(unsigned long long)arg1 text:(id)arg2;
- (id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 withRepetitions:(_Bool)arg6 collapseBorders:(_Bool)arg7 rowCharRange:(struct _NSRange *)arg8 indexInRow:(unsigned long long *)arg9 startingRow:(long long *)arg10 startingColumn:(long long *)arg11 previousRowBlockHelper:(id *)arg12;
- (void)_setTableFlags:(unsigned long long)arg1;
- (unsigned long long)_tableFlags;
- (void)setLayoutAlgorithm:(unsigned long long)arg1;
- (unsigned long long)layoutAlgorithm;
- (void)setHidesEmptyCells:(_Bool)arg1;
- (_Bool)hidesEmptyCells;
- (void)setCollapsesBorders:(_Bool)arg1;
- (_Bool)collapsesBorders;
- (unsigned long long)numberOfColumns;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
