//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>

@class NSString;
@protocol CRKCardSectionViewControllingDelegate;

@interface INUICKPExtensionCardSectionViewController <CRKCardSectionViewControlling>
{
    id <CRKCardSectionViewControllingDelegate> _cardSectionViewControllingDelegate;
}

@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate=_cardSectionViewControllingDelegate;
- (void).cxx_destruct;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
