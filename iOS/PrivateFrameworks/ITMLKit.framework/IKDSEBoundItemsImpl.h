//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMBindingControllerDelegate-Protocol.h>
#import <ITMLKit/IKDataSourceElementImplementing-Protocol.h>
#import <ITMLKit/IKJSDataItemObserver-Protocol.h>

@class IKAppDataSet, IKDOMBindingController, IKDataSourceElement, IKElementChangeSet, NSArray, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface IKDSEBoundItemsImpl : NSObject <IKJSDataItemObserver, IKDataSourceElementImplementing, IKDOMBindingControllerDelegate>
{
    NSMutableDictionary *_instantiatedDOMElementsByItemID;
    _Bool _visibleIndexRangeIsDirty;
    IKDataSourceElement *_dataSourceElement;
    IKDOMBindingController *_bindingController;
    NSArray *_prototypes;
    IKElementChangeSet *_itemsChangeset;
    IKAppDataSet *_dataSet;
    NSDictionary *_usedPrototypesByType;
    NSDictionary *_childrenByItemID;
    NSMutableIndexSet *_visibleIndexSet;
    NSMutableDictionary *_proxyChildrenByItemID;
}

+ (_Bool)_isPrototypeDOMElement:(id)arg1 validForReuseWithID:(id)arg2;
+ (_Bool)areItemsBoundForBinding:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *proxyChildrenByItemID; // @synthesize proxyChildrenByItemID=_proxyChildrenByItemID;
@property(retain, nonatomic) NSMutableIndexSet *visibleIndexSet; // @synthesize visibleIndexSet=_visibleIndexSet;
@property(copy, nonatomic) NSDictionary *childrenByItemID; // @synthesize childrenByItemID=_childrenByItemID;
@property(copy, nonatomic) NSDictionary *usedPrototypesByType; // @synthesize usedPrototypesByType=_usedPrototypesByType;
@property(retain, nonatomic) IKAppDataSet *dataSet; // @synthesize dataSet=_dataSet;
@property(retain, nonatomic) IKElementChangeSet *itemsChangeset; // @synthesize itemsChangeset=_itemsChangeset;
@property(retain, nonatomic) NSArray *prototypes; // @synthesize prototypes=_prototypes;
@property(readonly, nonatomic) IKDOMBindingController *bindingController; // @synthesize bindingController=_bindingController;
@property(readonly, nonatomic) __weak IKDataSourceElement *dataSourceElement; // @synthesize dataSourceElement=_dataSourceElement;
- (void).cxx_destruct;
- (id)_itemsPropertyPath;
- (id)_prototypeForType:(id)arg1;
- (id)_appDataItemFromJSDataItem:(id)arg1 prototype:(id)arg2;
- (void)_appendAutoHighlightedIndexesWithIndex:(long long)arg1;
- (void)_appendUpdatedIndexesWithIndex:(long long)arg1;
- (void)_appendVisibleIndexSetWithIndex:(long long)arg1;
- (id)_instantiateItemAtIndex:(long long)arg1 domBindingController:(id)arg2;
- (void)_applyAutoHighlightedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2;
- (void)_applyUpdatedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2;
- (void)_applyVisibleIndexRangeValueWithRange:(struct _NSRange)arg1 domBindingController:(id)arg2;
- (void)_applyItemsValueWithItems:(id)arg1 domBindingController:(id)arg2;
- (void)dataItem:(id)arg1 didChangeSubPropertyPathWithString:(id)arg2 forPropertyPathWithString:(id)arg3 subscriptIndex:(long long)arg4;
- (void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;
- (_Bool)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
- (id)additionalKeysToResolveForDOMBindingController:(id)arg1;
- (_Bool)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
- (_Bool)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
- (void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
- (long long)indexOfItemForChildElement:(id)arg1;
- (id)actualElementForProxyElement:(id)arg1;
- (void)resetUpdates;
- (void)updateStylesUsingUpdater:(CDUnknownBlockType)arg1;
- (void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(CDUnknownBlockType)arg2;
- (void)configureUpdatesWithImplementation:(id)arg1;
- (void)teardown;
- (void)initializeWithElementFactory:(id)arg1;
- (void)unloadIndex:(long long)arg1;
- (void)loadIndex:(long long)arg1;
- (id)elementForItemAtIndex:(long long)arg1;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithDataSourceElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
