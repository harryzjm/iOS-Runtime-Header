//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSKit/TSKSelection.h>

@interface TSTStrokeSelection : TSKSelection
{
    unsigned int _mask;
}

+ (Class)archivedSelectionClass;
+ (id)strokeSelectionWithMask:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int mask; // @synthesize mask=_mask;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct StrokeSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokeSelectionArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithStrokeVisibilityMask:(unsigned int)arg1;

@end
