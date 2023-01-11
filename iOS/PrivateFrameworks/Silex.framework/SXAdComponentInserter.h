//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInserter-Protocol.h>

@class NSArray, NSString;
@protocol SXAdvertisingSettingsProvider, SXComponentInsertionConditionEngine;

@interface SXAdComponentInserter : NSObject <SXComponentInserter>
{
    id <SXComponentInsertionConditionEngine> _conditionEngine;
    id <SXAdvertisingSettingsProvider> _advertisingSettingsProvider;
    long long _insertedCount;
    double _lastInsertedYOffset;
}

@property(nonatomic) double lastInsertedYOffset; // @synthesize lastInsertedYOffset=_lastInsertedYOffset;
@property(nonatomic) long long insertedCount; // @synthesize insertedCount=_insertedCount;
@property(readonly, nonatomic) id <SXAdvertisingSettingsProvider> advertisingSettingsProvider; // @synthesize advertisingSettingsProvider=_advertisingSettingsProvider;
@property(readonly, nonatomic) id <SXComponentInsertionConditionEngine> conditionEngine; // @synthesize conditionEngine=_conditionEngine;
- (void).cxx_destruct;
- (unsigned long long)adTypeFromBannerType:(unsigned long long)arg1;
- (id)componentInsertForMarker:(id)arg1 layoutProvider:(id)arg2;
- (_Bool)validateMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id)arg3;
- (unsigned long long)componentTraits;
@property(readonly, nonatomic) NSArray *conditions;
- (id)initWithConditionEngine:(id)arg1 advertisingSettingsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
