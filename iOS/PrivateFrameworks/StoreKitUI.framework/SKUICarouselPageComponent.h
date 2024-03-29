//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSArray, NSString, SKUICarouselViewElement;

__attribute__((visibility("hidden")))
@interface SKUICarouselPageComponent : SKUIPageComponent
{
    NSArray *_carouselItems;
    double _cycleInterval;
    long long _missingItemCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(readonly, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
- (id)valueForMetricsField:(id)arg1;
- (id)metricsElementName;
- (_Bool)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)componentType;
- (void)updateWithMissingItems:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SKUICarouselViewElement *viewElement; // @dynamic viewElement;

@end

