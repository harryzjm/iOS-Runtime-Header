//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSCopying-Protocol.h>

@class TSSPropertyMap;

__attribute__((visibility("hidden")))
@interface TSTCellDiff <NSCopying>
{
    TSSPropertyMap *_propertyMapToSet;
    TSSPropertyMap *_propertyMapToReset;
}

+ (id)cellDiffWithContext:(id)arg1;
@property(retain, nonatomic) TSSPropertyMap *propertyMapToReset; // @synthesize propertyMapToReset=_propertyMapToReset;
@property(retain, nonatomic) TSSPropertyMap *propertyMapToSet; // @synthesize propertyMapToSet=_propertyMapToSet;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectApplyingDiffToObject:(id)arg1 andUpdateInverse:(id)arg2;
- (void)clear;
- (void)removeObjectsToSetForProperty:(int)arg1;
- (id)propertyMapToSetWithProperties:(id)arg1;
- (void)resetPropertiesFromMap:(id)arg1;
- (void)setPropertiesFromMap:(id)arg1;
- (void)resetFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)resetIntValue:(int)arg1 forProperty:(int)arg2;
- (void)resetObject:(id)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setObject:(id)arg1 forProperty:(int)arg2;
- (_Bool)containsAnyPropertiesInSet:(id)arg1;
- (id)allProperties;
- (id)objectForResetProperty:(int)arg1;
- (_Bool)doesResetAnyProperties:(id)arg1;
- (_Bool)doesResetProperty:(int)arg1;
- (id)objectForSetProperty:(int)arg1;
- (_Bool)doesSetAnyProperties:(id)arg1;
- (_Bool)doesSetProperty:(int)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)cellDiffFilteredBySetProperties:(id)arg1;

@end

