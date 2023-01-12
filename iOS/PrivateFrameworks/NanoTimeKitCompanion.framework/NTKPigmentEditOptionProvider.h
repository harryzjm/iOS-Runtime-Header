//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKPigmentEditOptionStoreListener-Protocol.h>

@class NSBundle, NSString, NTKFace, NTKPigmentEditOptionStore;

@interface NTKPigmentEditOptionProvider : NSObject <NTKPigmentEditOptionStoreListener>
{
    NTKFace *_face;
    NSBundle *_bundle;
    NSString *_domain;
    NTKPigmentEditOptionStore *_store;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NTKFace *face; // @synthesize face=_face;
- (void)colorEditOptionStore:(id)arg1 didChangeForDomain:(id)arg2;
- (_Bool)hasAddableCollectionsForSlot:(id)arg1;
- (id)availableColorsForSlot:(id)arg1;
- (id)migratedOptionForInvalidOption:(id)arg1 slot:(id)arg2;
- (id)fulfilledOptionForOption:(id)arg1 slot:(id)arg2;
- (id)optionAtIndex:(unsigned long long)arg1 slot:(id)arg2;
- (unsigned long long)indexOfOption:(id)arg1 slot:(id)arg2;
- (unsigned long long)numberOfOptionsForSlot:(id)arg1;
- (id)defaultColorOptionForSlot:(id)arg1;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 bundle:(id)arg2;
- (id)initWithFace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
