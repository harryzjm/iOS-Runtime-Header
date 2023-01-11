//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBFoundation/NSObject-Protocol.h>

@class IBICAbstractCatalogItem, IBICSlot;
@protocol IBCollection;

@protocol IBICAssetWithSlottedChildren <NSObject>
+ (id)defaultInstanceWithChildSlots:(id <IBCollection>)arg1;
+ (Class)slotClass;
- (_Bool)shouldMutateChild:(IBICAbstractCatalogItem *)arg1 byCopyingContentToNewSlot:(IBICSlot *)arg2;
- (void)setConflictState:(unsigned long long)arg1 forChild:(IBICAbstractCatalogItem *)arg2;
- (_Bool)isChildMinimallyFitForCompiling:(IBICAbstractCatalogItem *)arg1;
- (Class)expectedChildClassForSlot:(IBICSlot *)arg1;
- (IBICAbstractCatalogItem *)conflictFreeChildForSlot:(IBICSlot *)arg1;
- (IBICSlot *)slotForChild:(IBICAbstractCatalogItem *)arg1;
- (unsigned long long)conflictStateForChild:(IBICAbstractCatalogItem *)arg1;
@end

