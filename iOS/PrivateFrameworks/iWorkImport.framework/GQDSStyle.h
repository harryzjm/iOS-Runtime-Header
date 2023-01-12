//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDSStyle : NSObject
{
    GQDSStyle *mParent;
    struct GQDSMap *mPropertyMap;
}

+ (int)styleTypeForNodeName:(const char *)arg1;
+ (id)createReplacementForMissingObject:(struct _xmlTextReader *)arg1 processor:(id)arg2;
+ (struct GQDSMap *)defaultMapForStyleType:(int)arg1;
+ (const struct StateSpec *)stateForReading;
+ (id)createReplacementForMissingStyleOfType:(int)arg1;
- (_Bool)overridesObjectProperty:(int)arg1 value:(id *)arg2;
- (_Bool)hasValueForObjectProperty:(int)arg1 value:(id *)arg2 wasOverriddenWithNull:(_Bool *)arg3;
- (_Bool)hasValueForObjectProperty:(int)arg1 value:(id *)arg2;
- (id)valueForObjectProperty:(int)arg1;
- (_Bool)overridesDoubleProperty:(int)arg1 value:(double *)arg2;
- (_Bool)hasValueForDoubleProperty:(int)arg1 value:(double *)arg2 wasOverriddenWithNull:(_Bool *)arg3;
- (_Bool)hasValueForDoubleProperty:(int)arg1 value:(double *)arg2;
- (double)valueForDoubleProperty:(int)arg1;
- (_Bool)overridesFloatProperty:(int)arg1 value:(float *)arg2;
- (_Bool)hasValueForFloatProperty:(int)arg1 value:(float *)arg2 wasOverriddenWithNull:(_Bool *)arg3;
- (_Bool)hasValueForFloatProperty:(int)arg1 value:(float *)arg2;
- (float)valueForFloatProperty:(int)arg1;
- (_Bool)overridesIntProperty:(int)arg1 value:(int *)arg2;
- (_Bool)hasValueForIntProperty:(int)arg1 value:(int *)arg2 wasOverriddenWithNull:(_Bool *)arg3;
- (_Bool)hasValueForIntProperty:(int)arg1 value:(int *)arg2;
- (int)valueForIntProperty:(int)arg1;
- (_Bool)overridesBoolProperty:(int)arg1 value:(_Bool *)arg2;
- (_Bool)hasValueForBoolProperty:(int)arg1 value:(_Bool *)arg2 wasOverriddenWithNull:(_Bool *)arg3;
- (_Bool)hasValueForBoolProperty:(int)arg1 value:(_Bool *)arg2;
- (_Bool)valueForBoolProperty:(int)arg1;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setPropertyMap:(struct GQDSMap *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

