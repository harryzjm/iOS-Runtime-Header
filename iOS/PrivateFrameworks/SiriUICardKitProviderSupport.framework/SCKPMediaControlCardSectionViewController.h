//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SiriUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>

@class AFSecurityConnection, NSString, SCKPMediaControlCardSectionView, SFMediaRemoteControlCardSection;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling>
{
    AFSecurityConnection *_assistantSecurityConnection;
    UIViewController *_mediaPlatterViewController;
    id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
    SFMediaRemoteControlCardSection *_cardSection;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) SFMediaRemoteControlCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate;
- (void)_updatePlatterForRouteUID:(id)arg1;
- (void)_updatePlatterForHashedRouteUID:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)loadView;
- (id)initWithMediaRemoteControlCardSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) SCKPMediaControlCardSectionView *view; // @dynamic view;

@end
