//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, SXComponentInsert;
@protocol SXBlueprintMarker, SXComponentInsertionConditionEngine, SXComponentInsertionLayoutProvider;

@protocol SXComponentInserter <NSObject>
@property(readonly, nonatomic) id <SXComponentInsertionConditionEngine> conditionEngine;
@property(readonly, nonatomic) NSArray *conditions;
- (SXComponentInsert *)componentInsertForMarker:(id <SXBlueprintMarker>)arg1 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg2;
- (_Bool)validateMarker:(id <SXBlueprintMarker>)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (unsigned long long)componentTraits;

@optional
- (void)componentInsertionCompleted;
@end
