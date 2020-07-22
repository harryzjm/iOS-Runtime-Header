//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface _WGConcreteDataSource : NSObject
{
    NSMutableArray *_observers;
    NSMutableDictionary *_identifiersToData;
}

- (void).cxx_destruct;
- (id)datumWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *data;
@property(readonly, nonatomic) NSArray *dataIdentifiers;
- (void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(CDUnknownBlockType)arg3;
- (void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

