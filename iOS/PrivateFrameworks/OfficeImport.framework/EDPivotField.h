//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotField : NSObject
{
    int mAxis;
    _Bool mCompact;
    _Bool mDataField;
    _Bool mShowDefaultSubTotal;
    _Bool mInsertBlankRow;
    _Bool mOutlineItems;
    _Bool mShowAllItems;
    _Bool mSubtotalTop;
    unsigned long long mNumFmtId;
    EDCollection *mPivotFieldItems;
}

+ (id)pivotField;
- (void).cxx_destruct;
- (id)description;
- (id)pivotFieldItems;
- (void)setAxis:(int)arg1;
- (int)axis;
- (void)setNumFmtId:(unsigned long long)arg1;
- (unsigned long long)numFmtId;
- (void)setSubtotalTop:(_Bool)arg1;
- (_Bool)subtotalTop;
- (void)setShowAllItems:(_Bool)arg1;
- (_Bool)showAllItems;
- (void)setOutlineItems:(_Bool)arg1;
- (_Bool)outlineItems;
- (void)setInsertBlankRow:(_Bool)arg1;
- (_Bool)insertBlankRow;
- (void)setShowDefaultSubTotal:(_Bool)arg1;
- (_Bool)showDefaultSubTotal;
- (void)setDataField:(_Bool)arg1;
- (_Bool)dataField;
- (void)setCompact:(_Bool)arg1;
- (_Bool)compact;
- (id)init;

@end
