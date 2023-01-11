//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SKUIExpandViewElement;

__attribute__((visibility("hidden")))
@interface SKUIExpandPageComponent
{
    NSMutableArray *_childComponents;
    SKUIExpandViewElement *_viewElement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIExpandViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)metricsElementName;
- (long long)componentType;
- (id)childComponents;
- (id)childComponentForIndex:(long long)arg1;
- (id)initWithViewElement:(id)arg1;

@end
