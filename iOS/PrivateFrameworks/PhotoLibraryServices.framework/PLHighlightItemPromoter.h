//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PLHighlightItemPromoterRule;

@interface PLHighlightItemPromoter : NSObject
{
    id <PLHighlightItemPromoterRule> _rule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PLHighlightItemPromoterRule> rule; // @synthesize rule=_rule;
- (void)processHighlightItemsInHighlightItemList:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)initWithRule:(id)arg1;

@end
