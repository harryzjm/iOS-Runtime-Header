//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDataSet, IKChangeSet, IKDataSourceElement, NSArray, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSString, _IKDSEPrototypeBundle;

__attribute__((visibility("hidden")))
@interface IKDSEBoundItemsImpl : NSObject
{
    _Bool _visibleIndexRangeIsDirty;
    IKDataSourceElement *_dataSourceElement;
    IKChangeSet *_itemsChangeSet;
    IKAppDataSet *_dataSet;
    NSDictionary *_usedPrototypeMappingsByIdentifier;
    _IKDSEPrototypeBundle *_prototypeBundle;
    NSDictionary *_childrenByItemID;
    NSMutableIndexSet *_visibleIndexSet;
    NSMutableDictionary *_proxiedItemElementsByItemID;
}

+ (_Bool)_canProxiedItemElementsBeUpdatedWithLoadedElements;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *proxiedItemElementsByItemID; // @synthesize proxiedItemElementsByItemID=_proxiedItemElementsByItemID;
@property(retain, nonatomic) NSMutableIndexSet *visibleIndexSet; // @synthesize visibleIndexSet=_visibleIndexSet;
@property(copy, nonatomic) NSDictionary *childrenByItemID; // @synthesize childrenByItemID=_childrenByItemID;
@property(retain, nonatomic) _IKDSEPrototypeBundle *prototypeBundle; // @synthesize prototypeBundle=_prototypeBundle;
@property(copy, nonatomic) NSDictionary *usedPrototypeMappingsByIdentifier; // @synthesize usedPrototypeMappingsByIdentifier=_usedPrototypeMappingsByIdentifier;
@property(retain, nonatomic) IKAppDataSet *dataSet; // @synthesize dataSet=_dataSet;
@property(retain, nonatomic) IKChangeSet *itemsChangeSet; // @synthesize itemsChangeSet=_itemsChangeSet;
@property(readonly, nonatomic) __weak IKDataSourceElement *dataSourceElement; // @synthesize dataSourceElement=_dataSourceElement;
- (void)_initializePrototypeBundleIfNeeded;
- (void)_appendVisibleIndexSetWithIndex:(long long)arg1;
- (id)_elementForItemAtIndex:(long long)arg1;
- (id)_prototypeMappingForItemAtIndex:(long long)arg1;
- (_Bool)canProxyUnloadedChildElement:(id)arg1;
- (id)proxyElementForLoadedChildElement:(id)arg1;
- (void)resetImplicitUpdates;
- (id)masterPrototypeForItemAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property(readonly, nonatomic) NSArray *masterPrototypes;
- (void)resetUpdates;
- (void)updateStylesUsingUpdater:(CDUnknownBlockType)arg1;
- (void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(CDUnknownBlockType)arg2;
- (void)configureUpdatesWithImplementation:(id)arg1;
- (void)teardown;
- (void)initializeWithElementFactory:(id)arg1;
- (void)unloadIndex:(long long)arg1;
- (void)loadIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSDictionary *indexTitles;
- (long long)indexOfItemForElement:(id)arg1;
- (id)elementForItemAtIndex:(long long)arg1;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
@property(readonly, nonatomic) NSArray *prototypes;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithDataSourceElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

