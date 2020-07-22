//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>

@class NSDate, NSString, NUAdBannerView;

@interface NUAd : NSObject <NUAdContextProvider>
{
    NSString *_identifier;
    NUAdBannerView *_bannerView;
    NSString *_opportunityIdentifier;
    NSDate *_creationDate;
    NSDate *_loadDate;
    NSDate *_unloadDate;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *unloadDate; // @synthesize unloadDate=_unloadDate;
@property(retain, nonatomic) NSDate *loadDate; // @synthesize loadDate=_loadDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *opportunityIdentifier; // @synthesize opportunityIdentifier=_opportunityIdentifier;
@property(retain, nonatomic) NUAdBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithBanner:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

