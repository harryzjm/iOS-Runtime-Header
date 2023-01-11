//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDataSectionManagerChangeObserver-Protocol.h>

@class NSArray, NSString, PXArrayChangeDetails, PXDataSection;
@protocol NSObject><NSCopying;

@interface PXDataSectionManager <PXDataSectionManagerChangeObserver>
{
    PXDataSection *_dataSection;
    NSArray *_childDataSectionManagers;
    id <NSObject><NSCopying> _outlineObject;
    PXArrayChangeDetails *_changeDetailsFromPreviousDataSection;
    PXDataSection *_previousDataSection;
    unsigned long long _previousDataSectionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long previousDataSectionIdentifier; // @synthesize previousDataSectionIdentifier=_previousDataSectionIdentifier;
@property(readonly, nonatomic) PXDataSection *previousDataSection; // @synthesize previousDataSection=_previousDataSection;
@property(readonly, nonatomic) PXArrayChangeDetails *changeDetailsFromPreviousDataSection; // @synthesize changeDetailsFromPreviousDataSection=_changeDetailsFromPreviousDataSection;
@property(retain, nonatomic) id <NSObject><NSCopying> outlineObject; // @synthesize outlineObject=_outlineObject;
@property(copy, nonatomic) NSArray *childDataSectionManagers; // @synthesize childDataSectionManagers=_childDataSectionManagers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly, nonatomic) unsigned long long childChangeDescriptorsInvalidatingDataSection;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (void)childDataSectionManager:(id)arg1 didChangeDataSectionWithChangeDetails:(id)arg2;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
@property(readonly, nonatomic, getter=isDataSectionEmpty) _Bool dataSectionEmpty;
@property(readonly, nonatomic) PXDataSection *dataSection;
@property(readonly, nonatomic) PXDataSection *dataSectionIfCreated;
- (id)createDataSection;
- (void)updateDataSectionWithChangeDetails:(id)arg1;
- (void)_setDataSection:(id)arg1 changeDetails:(id)arg2;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
@property(readonly, nonatomic) _Bool allowsEmptyDataSection;
- (id)init;
- (id)initWithChildDataSectionManagers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
