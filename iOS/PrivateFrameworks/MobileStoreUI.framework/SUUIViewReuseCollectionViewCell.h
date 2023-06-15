//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICollectionViewCell.h"

@class NSArray, NSMapTable, SUUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SUUIViewReuseCollectionViewCell : SUUICollectionViewCell
{
    NSMapTable *_allViewTextProperties;
    SUUIViewReusePool *_viewPool;
    NSArray *_allExistingViews;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)setBackgroundColor:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)textPropertiesForView:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (id)existingViewsForReuseIdentifier:(id)arg1;
- (id)existingViewForIndex:(long long)arg1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

