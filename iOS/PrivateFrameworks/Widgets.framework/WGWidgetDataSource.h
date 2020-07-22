//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Widgets/WGDataSource-Protocol.h>
#import <Widgets/_WGDataSource-Protocol.h>

@class NSArray, NSString, _WGConcreteDataSource;

@interface WGWidgetDataSource : NSObject <_WGDataSource, WGDataSource>
{
    NSString *_dataSourceIdentifier;
    _WGConcreteDataSource *_concreteDataSource;
}

@property(retain, nonatomic, getter=_concreteDataSource, setter=_setConcreteDataSource:) _WGConcreteDataSource *concreteDataSource; // @synthesize concreteDataSource=_concreteDataSource;
@property(readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeDatumWithIdentifier:(id)arg1;
- (void)replaceWithDatum:(id)arg1;
- (void)removeWidgetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addWidgetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)widgetDatumWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *widgetIdentifiers;
@property(readonly, nonatomic) NSString *parentDataSourceIdentifier;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
