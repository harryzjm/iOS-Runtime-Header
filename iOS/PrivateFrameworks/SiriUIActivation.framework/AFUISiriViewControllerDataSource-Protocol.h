//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUIActivation/NSObject-Protocol.h>

@class AFBulletin, AFUISiriViewController, NSArray, NSString;

@protocol AFUISiriViewControllerDataSource <NSObject>
- (NSArray *)contextAppInfosForSiriViewController:(AFUISiriViewController *)arg1;
- (unsigned long long)lockStateForSiriViewController:(AFUISiriViewController *)arg1;
- (AFBulletin *)siriViewController:(AFUISiriViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;
- (NSArray *)bulletinsForSiriViewController:(AFUISiriViewController *)arg1;

@optional
- (NSArray *)currentCarPlaySupportedOEMAppsForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)starkAppBundleIdentifierContextForSiriViewController:(AFUISiriViewController *)arg1;
@end
