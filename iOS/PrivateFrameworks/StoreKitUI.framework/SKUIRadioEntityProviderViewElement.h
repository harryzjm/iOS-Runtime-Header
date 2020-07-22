//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIEntityProviding-Protocol.h>

@class NSArray, NSMapTable, NSString, RadioModel;

@interface SKUIRadioEntityProviderViewElement <SKUIEntityProviding>
{
    _Bool _hasValidStations;
    long long _countLimit;
    long long _radioEntityProviderType;
    RadioModel *_radioModel;
    NSArray *_stations;
    NSMapTable *_stationToStationEntityValueProvider;
}

- (void).cxx_destruct;
- (id)_stations;
- (id)_entityValueProviderForStation:(id)arg1;
- (void)_invalidateWithContext:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (id)sectionEntityValueProviderAtIndex:(long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (id)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

