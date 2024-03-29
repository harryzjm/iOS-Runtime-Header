//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSArray, NSString, SUUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SUUISegmentedControlViewElement : SUUIViewElement
{
    long long _maximumNumberOfVisibleItems;
    NSString *_moreListTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(readonly, nonatomic) long long maximumNumberOfVisibleItems; // @synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems;
- (void)_enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) NSArray *segmentItemTitles;
@property(readonly, nonatomic) long long initialSelectedItemIndex;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;
@property(readonly, nonatomic) SUUIDividerViewElement *bottomDivider;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

