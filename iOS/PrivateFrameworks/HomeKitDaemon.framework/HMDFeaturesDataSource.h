//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDFeaturesDataSource-Protocol.h>

@class NSString;

@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>
{
}

@property(readonly, getter=isSignificantEventNotificationsFeatureEnabled) _Bool significantEventNotificationsFeatureEnabled;
@property(readonly, getter=isCHIPFeatureEnabled) _Bool chipFeatureEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
