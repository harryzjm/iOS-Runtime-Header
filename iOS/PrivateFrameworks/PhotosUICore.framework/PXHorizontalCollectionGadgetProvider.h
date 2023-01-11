//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetProviderDelegate-Protocol.h>
#import <PhotosUICore/PXHorizontalCollectionGadgetDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PXHorizontalCollectionGadget;

@interface PXHorizontalCollectionGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate>
{
    PXHorizontalCollectionGadget *_horizontalGadget;
    _Bool _hasLoaded;
    Class _horizontalCollectionGadgetClass;
    NSArray *_contentGadgetProviders;
    NSString *_title;
    unsigned long long _gadgetType;
    long long _defaultColumnSpan;
    NSDictionary *_columnSpanForTraitCollection;
}

@property(copy, nonatomic) NSDictionary *columnSpanForTraitCollection; // @synthesize columnSpanForTraitCollection=_columnSpanForTraitCollection;
@property(nonatomic) long long defaultColumnSpan; // @synthesize defaultColumnSpan=_defaultColumnSpan;
@property(nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *contentGadgetProviders; // @synthesize contentGadgetProviders=_contentGadgetProviders;
- (void).cxx_destruct;
- (void)_updateHorizontalGadget;
- (void)invalidateGadgets;
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1;
- (void)resetPriorityDate;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)loadDataForPriority;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

