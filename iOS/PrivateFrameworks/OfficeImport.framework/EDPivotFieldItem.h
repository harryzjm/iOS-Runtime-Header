//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotFieldItem : NSObject
{
    _Bool mChildItems;
    _Bool mExpanded;
    _Bool mCalculatedMember;
    _Bool mMissed;
    _Bool mHidden;
    _Bool mDetailsHidden;
    int mType;
    unsigned long long mItemIndex;
}

+ (id)pivotFieldItem;
- (id)description;
- (void)setType:(int)arg1;
- (int)type;
- (void)setItemIndex:(unsigned long long)arg1;
- (unsigned long long)itemIndex;
- (void)setDetailsHidden:(_Bool)arg1;
- (_Bool)detailsHidden;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (void)setMissed:(_Bool)arg1;
- (_Bool)missed;
- (void)setCalculatedMember:(_Bool)arg1;
- (_Bool)calculatedMember;
- (void)setExpanded:(_Bool)arg1;
- (_Bool)expanded;
- (void)setChildItems:(_Bool)arg1;
- (_Bool)childItems;
- (id)init;

@end
