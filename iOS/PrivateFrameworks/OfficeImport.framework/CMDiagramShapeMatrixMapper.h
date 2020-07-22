//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramShapeMatrixMapper
{
    unsigned long long mColumnCount;
    unsigned long long mRowCount;
    float mRectWidth;
    float mRectHeight;
    _Bool mHasArrows;
    _Bool mIsSnake;
    _Bool mIsHorizontal;
    _Bool mIsLinear;
}

- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)circumscribedBounds;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (double)gapRatio;
- (struct CGSize)gapSize;
- (unsigned long long)columnCount;
- (void)setColumnsAndRowsCount;

@end

