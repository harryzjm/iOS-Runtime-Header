//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartReferenceLineLabelPaddingLayoutItem
{
    TSCHChartAxisID *mAxisID;
}

@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (_Bool)p_hasReferenceLineLabelsWithModel:(id)arg1;
- (struct CGSize)p_calcMinSizeForModel:(id)arg1;
- (struct CGSize)calcMinSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;

@end
