//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/RTMapItemProvider-Protocol.h>

@class NSString, RTEventManager, RTMapItemProviderEventKitParameters, RTMapServiceManager;

@interface RTMapItemProviderEventKit <RTMapItemProvider>
{
    RTEventManager *_eventManager;
    RTMapServiceManager *_mapServiceManager;
    RTMapItemProviderEventKitParameters *_parameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) RTMapItemProviderEventKitParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property(retain, nonatomic) RTEventManager *eventManager; // @synthesize eventManager=_eventManager;
- (id)mapItemsWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 parameters:(id)arg5;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
