//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBICSlot, NSString;

@interface IBICSlottedAssetRepIdentifier : NSObject
{
    IBICSlot *_slot;
    NSString *_fileName;
    unsigned long long _conflictState;
}

+ (id)inferredRepIdentifiersGroupedByItemNameForPaths:(id)arg1;
+ (id)inferredRepIdentifiersForPaths:(id)arg1;
+ (id)orderImageRepPathsForDeterministicConflictResolution:(id)arg1;
+ (id)inferredRepIdentifierForPath:(id)arg1;
+ (id)inferredRepIdentifiersForImageReps:(id)arg1;
+ (Class)slotClass;
+ (id)explicitlyUnassignedIdentifierForFileName:(id)arg1;
+ (id)identifierWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(_Bool)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(readonly) unsigned long long conflictState; // @synthesize conflictState=_conflictState;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) IBICSlot *slot; // @synthesize slot=_slot;
- (id)description;
@property(readonly) NSString *stringRepresentation;
- (long long)compareInTieBreakingOrder:(id)arg1;
- (_Bool)isExplicitlyUnassigned;
- (_Bool)isConflictFree;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImageCatalogImageRepIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetRepIdentifierBySettingConflictStateComponent:(unsigned long long)arg1 toValue:(_Bool)arg2;
- (long long)compareDisplayOrder:(id)arg1;
- (id)initWithSlot:(id)arg1 fileName:(id)arg2 conflictState:(unsigned long long)arg3;

@end

