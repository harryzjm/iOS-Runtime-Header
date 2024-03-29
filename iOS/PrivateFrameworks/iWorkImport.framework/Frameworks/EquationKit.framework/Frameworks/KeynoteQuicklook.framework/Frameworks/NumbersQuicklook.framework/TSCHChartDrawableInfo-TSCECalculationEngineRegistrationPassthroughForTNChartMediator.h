//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSCharts/TSCHChartDrawableInfo.h>

@class NSString;

@interface TSCHChartDrawableInfo (TSCECalculationEngineRegistrationPassthroughForTNChartMediator)
- (id)objectToArchiveInDependencyTracker;
- (id)componentRootObject;
- (_Bool)registerLast;
- (unsigned short)ownerKind;
- (struct TSKUIDStruct)formulaOwnerUID;
- (id)formulaOwner;
- (void)unregisterFromCalcEngine:(id)arg1;
- (void)registerWithCalcEngineForDocumentLoad:(id)arg1 ownerKind:(unsigned short)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

