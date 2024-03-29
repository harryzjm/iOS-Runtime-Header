//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUIActionsViewElement;

__attribute__((visibility("hidden")))
@interface SUUITrackViewElement : SUUIViewElement
{
    BOOL _enabled;
    _Bool _selected;
}

@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (_Bool)isEnabled;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SUUIActionsViewElement *swipeActions;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

