//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSPredicate;

@interface SKUIPredicateListViewElement
{
    NSPredicate *_compoundEntityValuePredicate;
}

- (void).cxx_destruct;
- (void)_enumeratePredicateViewElementsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSPredicate *compoundEntityValuePredicate;
@property(readonly, copy, nonatomic) NSArray *predicateViewElements;
- (id)applyUpdatesWithElement:(id)arg1;

@end
