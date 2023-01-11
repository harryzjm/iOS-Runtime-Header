//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTCellSpec : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>
{
}

+ (int)shimControlFormatTypeForInteractionType:(int)arg1;
+ (int)interactionTypeForShimControlFormatType:(int)arg1;
+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)instanceWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
+ (id)cellDiffProperties;
+ (_Bool)interactionTypeIsControl:(int)arg1;
+ (id)defaultCellSpec;
- (_Bool)validateFormatAndValue:(id)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct CellSpecArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)propertiesMatchingThoseInMap:(id)arg1;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isControl;
- (id)asToggleControlSpec;
- (id)asChooserControlSpec;
- (id)asRangeControlSpec;
- (id)asFormulaSpec;
@property(readonly, nonatomic) _Bool hasTSCEFormula;
@property(readonly, nonatomic) int interactionType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

