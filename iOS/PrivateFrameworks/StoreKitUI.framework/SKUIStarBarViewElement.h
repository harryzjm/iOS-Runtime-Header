//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

__attribute__((visibility("hidden")))
@interface SKUIStarBarViewElement : SKUIViewElement
{
    long long _numberOfRatings;
    long long _numberOfStars;
    float _value;
}

@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) long long numberOfStars; // @synthesize numberOfStars=_numberOfStars;
@property(readonly, nonatomic) long long numberOfRatings; // @synthesize numberOfRatings=_numberOfRatings;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

