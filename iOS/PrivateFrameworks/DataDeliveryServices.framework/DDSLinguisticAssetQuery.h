//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DDSLinguisticAttributeFilter;

@interface DDSLinguisticAssetQuery
{
}

- (void)addRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (id)initWithLanguageIdentifier:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) DDSLinguisticAttributeFilter *filter;

@end
