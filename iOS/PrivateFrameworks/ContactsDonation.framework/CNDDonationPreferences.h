//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDDonationPreferences-Protocol.h>

@class NSNotificationCenter, NSString;
@protocol CNDonationPreferencesLogger;

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences>
{
    NSNotificationCenter *_notificationCenter;
    Class _storageClass;
    id <CNDonationPreferencesLogger> _logger;
}

+ (id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;
@property(readonly, nonatomic) id <CNDonationPreferencesLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) Class storageClass; // @synthesize storageClass=_storageClass;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
@property(nonatomic, getter=isDonationsEnabled) _Bool donationsEnabled;
@property(readonly, copy) NSString *description;
- (id)initWithNotificationCenter:(id)arg1 storageClass:(Class)arg2 logger:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

