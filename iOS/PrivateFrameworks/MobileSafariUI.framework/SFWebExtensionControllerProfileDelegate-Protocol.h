//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSArray, NSString, SFContentBlockerManager, SFWebExtensionsController, WBTabGroupManager;

@protocol SFWebExtensionControllerProfileDelegate <NSObject>
- (NSArray *)sfWebExtensionsControllersContentBlockerManagersForAllProfiles:(SFWebExtensionsController *)arg1;
- (NSArray *)sfWebExtensionsControllersForAllProfiles:(SFWebExtensionsController *)arg1;

@optional
- (SFContentBlockerManager *)sfWebExtensionsControllerContentBlockerManager:(SFWebExtensionsController *)arg1 forProfileServerID:(NSString *)arg2;
- (SFWebExtensionsController *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 forProfileServerID:(NSString *)arg2;
- (NSArray *)sfWebExtensionsControllerAllProfileExtensionsControllers:(SFWebExtensionsController *)arg1;
- (WBTabGroupManager *)sfWebExtensionsControllerTabGroupManager:(SFWebExtensionsController *)arg1;
@end

