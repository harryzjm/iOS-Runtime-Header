//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/NSObject-Protocol.h>

@class INIntent, INUIRemoteViewController, NSArray, NSDictionary;

@protocol INUIRemoteViewControllerDelegate <NSObject>

@optional
- (NSArray *)interfaceSectionsForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)maximumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)minimumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (void)remoteViewController:(INUIRemoteViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)remoteViewControllerServiceDidTerminate:(INUIRemoteViewController *)arg1;
@end

