//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, SKUINavigationBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIExploreTemplateElement : SKUIViewElement
{
    _Bool _usesSplits;
}

@property(readonly, nonatomic) _Bool usesSplits; // @synthesize usesSplits=_usesSplits;
- (void)_getLeftSplit:(id *)arg1 rightSplit:(id *)arg2;
@property(readonly, nonatomic) SKUIViewElement *rightSplit;
@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property(readonly, nonatomic) SKUIViewElement *leftSplit;
@property(readonly, nonatomic) NSArray *childViewElements;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

