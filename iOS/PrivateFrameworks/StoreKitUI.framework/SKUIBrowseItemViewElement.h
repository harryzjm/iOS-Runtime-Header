//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemViewElement
{
    _Bool _expands;
}

@property(readonly, nonatomic) _Bool expands; // @synthesize expands=_expands;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) SKUIImageViewElement *decorationImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

