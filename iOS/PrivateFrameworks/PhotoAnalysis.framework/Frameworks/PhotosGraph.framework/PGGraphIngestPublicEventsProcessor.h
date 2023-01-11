//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PGGraphIngestPublicEventsProcessor
{
    NSDictionary *_publicEventCriteriaByCategory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *publicEventCriteriaByCategory; // @synthesize publicEventCriteriaByCategory=_publicEventCriteriaByCategory;
- (id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg1;
- (void)_collectConsolidatedAddressesForMomentNodes:(id)arg1 inGraph:(id)arg2 consolidatedAddresses:(id *)arg3 consolidatedAddressesByMomentIdentifier:(id *)arg4 momentNodesForConsolidatedAddresses:(id *)arg5;
- (id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3;
- (void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

@end
