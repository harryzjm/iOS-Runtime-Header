//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSString, SKUIImageViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCircleItemViewElement : SKUIViewElement
{
    long long _circleSize;
    NSString *_itemIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) long long circleSize; // @synthesize circleSize=_circleSize;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUILabelViewElement *titleElement;
@property(readonly, nonatomic) SKUIImageViewElement *imageElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

