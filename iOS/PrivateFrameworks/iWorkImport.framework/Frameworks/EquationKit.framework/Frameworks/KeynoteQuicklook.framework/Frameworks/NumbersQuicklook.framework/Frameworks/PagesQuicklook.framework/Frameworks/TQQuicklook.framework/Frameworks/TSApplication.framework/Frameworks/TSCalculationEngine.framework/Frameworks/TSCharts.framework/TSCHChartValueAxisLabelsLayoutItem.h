//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCHChartValueAxisLabelsLayoutItem
{
}

- (id)selectionPathLabelType;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2;
- (struct CGPoint)labelAnchorForPosition:(int)arg1 degrees:(float)arg2;
- (struct CGPoint)axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(struct CGRect)arg3 unrotatedSize:(struct CGSize)arg4 unitSpaceValue:(double)arg5;
- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)numberOfLabelsForAxis:(id)arg1;
- (id)initWithParent:(id)arg1;

@end
