//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionManager-Protocol.h>

@class NSString;
@protocol SXBlueprintAnalyzer, SXComponentInserterProvider, SXComponentInsertionConditionEngine;

@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager>
{
    _Bool _hasInsertedComponents;
    id <SXComponentInsertionConditionEngine> _conditionEngine;
    id <SXComponentInserterProvider> _inserterProvider;
    id <SXBlueprintAnalyzer> _blueprintAnalyzer;
}

@property(nonatomic) _Bool hasInsertedComponents; // @synthesize hasInsertedComponents=_hasInsertedComponents;
@property(readonly, nonatomic) id <SXBlueprintAnalyzer> blueprintAnalyzer; // @synthesize blueprintAnalyzer=_blueprintAnalyzer;
@property(readonly, nonatomic) id <SXComponentInserterProvider> inserterProvider; // @synthesize inserterProvider=_inserterProvider;
@property(readonly, nonatomic) id <SXComponentInsertionConditionEngine> conditionEngine; // @synthesize conditionEngine=_conditionEngine;
- (void).cxx_destruct;
- (void)updateLayoutDataProvider:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4;
- (id)insertForMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 inserter:(id)arg3 layoutProvider:(id)arg4 layoutDataProvider:(id)arg5;
- (void)insertComponentsForBlueprint:(id)arg1 layoutDataProvider:(id)arg2;
- (id)initWithComponentInserterProvider:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
