//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long changeCount;
- (void)addChange:(id)arg1;
- (long long)_toManyPropertyType;
- (_Bool)_isToManyChangeInformation;
- (void)applyChangesToSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;

@end

