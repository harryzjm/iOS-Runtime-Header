//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFMutableSetDiff
{
    _Bool _hasChanges;
}

@property(readonly, nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateHasChanges;
- (void)updateObject:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)initWithFromSet:(id)arg1;

@end
