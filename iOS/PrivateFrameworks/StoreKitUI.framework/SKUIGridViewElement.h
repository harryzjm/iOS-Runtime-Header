//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class SKUICollectionDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElement : SKUIViewElement
{
    id _persistenceKey;
    _Bool _showsEditMode;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsEditMode; // @synthesize showsEditMode=_showsEditMode;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2;
@property(readonly, nonatomic) SKUICollectionDOMFeature *collectionFeature;
@property(readonly, nonatomic) _Bool allowsMultipleSelectionDuringEditing;
- (id)persistenceKey;
- (long long)pageComponentType;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

