//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICIdiom;

@interface IBICARImageSetRepIdentifier
{
}

+ (id)inferredRepIdentifiersForImageReps:(id)arg1;
+ (id)inferredRepIdentifiersGroupedByItemNameForPaths:(id)arg1;
+ (id)inferredRepIdentifierForPath:(id)arg1 slotComponentTransformer:(CDUnknownBlockType)arg2;
+ (Class)slotClass;
+ (id)identifierWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(_Bool)arg3;
@property(readonly) IBICIdiom *idiom;
- (id)slot;
- (id)initWithSlot:(id)arg1 fileName:(id)arg2 conflictState:(unsigned long long)arg3;

@end

