//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADSingleton.h>

@interface ADAMSBagManager : ADSingleton
{
}

+ (id)sharedInstance;
- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1;
- (_Bool)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (_Bool)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (_Bool)authenticateAccountThroughAMSOperation:(id)arg1;

@end

