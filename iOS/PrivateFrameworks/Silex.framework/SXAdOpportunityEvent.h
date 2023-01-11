//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, SXADBannerView;

@interface SXAdOpportunityEvent
{
    _Bool _expanded;
    _Bool _shown;
    int _opportunityError;
    NSString *_opportunityIdentifier;
    double _positionInArticle;
    NSString *_componentIdentifier;
    NSError *_error;
    SXADBannerView *_bannerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shown; // @synthesize shown=_shown;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) SXADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int opportunityError; // @synthesize opportunityError=_opportunityError;
@property(retain, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(nonatomic) double positionInArticle; // @synthesize positionInArticle=_positionInArticle;
@property(retain, nonatomic) NSString *opportunityIdentifier; // @synthesize opportunityIdentifier=_opportunityIdentifier;
- (id)description;

@end
