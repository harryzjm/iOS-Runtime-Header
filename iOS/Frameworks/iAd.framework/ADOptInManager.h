//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iAd/ADAdServingDaemonConnectionDelegate-Protocol.h>

@class ADAdServingDaemonConnection, NSString;

@interface ADOptInManager : NSObject <ADAdServingDaemonConnectionDelegate>
{
    ADAdServingDaemonConnection *_connection;
}

+ (id)sharedManager;
@property(retain, nonatomic) ADAdServingDaemonConnection *connection; // @synthesize connection=_connection;
- (void)adServingDaemonConnectionInterrupted;
- (void)getiAdIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureConnection:(id)arg1;
- (id)adServingDaemonMachServiceName;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

