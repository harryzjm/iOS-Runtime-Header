//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface _SFSafariDataSharingController : NSObject
{
    NSObject<OS_dispatch_queue> *_dataSharingQueue;
    NSMutableArray *_appBundlesWithSeparateData;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)clearAllWebsitesData;
- (void)checkInAppBundleIDIfNeeded:(id)arg1;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (id)systemDataContainerURLWithAppBundleID:(id)arg1;
- (id)init;

@end
