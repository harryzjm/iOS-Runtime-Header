//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, SXContext, SXDocumentController;
@protocol OS_dispatch_semaphore;

@interface SXLayoutDataProvider : NSObject
{
    SXDocumentController *_documentController;
    SXContext *_context;
    NSMutableArray *_components;
    NSMutableArray *_componentIdentifiers;
    NSMutableDictionary *_componentLayouts;
    NSMutableSet *_componentsIdentifiersToRemove;
    NSMutableDictionary *_childLayoutDataProviders;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSMutableDictionary *childLayoutDataProviders; // @synthesize childLayoutDataProviders=_childLayoutDataProviders;
@property(retain, nonatomic) NSMutableSet *componentsIdentifiersToRemove; // @synthesize componentsIdentifiersToRemove=_componentsIdentifiersToRemove;
@property(retain, nonatomic) NSMutableDictionary *componentLayouts; // @synthesize componentLayouts=_componentLayouts;
@property(retain, nonatomic) NSMutableArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(readonly, nonatomic) SXContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
- (void)removeComponent:(id)arg1;
- (void)removeComponentWithIdentifier:(id)arg1;
- (void)insertComponentLayout:(id)arg1 withIdentifier:(id)arg2;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertComponent:(id)arg1 afterComponent:(id)arg2;
- (id)layoutDataProviderForContainerComponent:(id)arg1;
- (id)layoutDataProviderForPath:(id)arg1;
- (id)removedComponentsIdentifiers;
- (id)componentLayoutForIdentifier:(id)arg1;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)componentForIdentifier:(id)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfComponents;
- (void)prepare;
- (id)initWithComponents:(id)arg1 andContext:(id)arg2;

@end

