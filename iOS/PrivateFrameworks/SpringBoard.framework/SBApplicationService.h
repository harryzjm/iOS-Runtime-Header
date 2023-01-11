//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationServerMiscDelegate-Protocol.h>

@class NSString, SBApplicationController;

@interface SBApplicationService : NSObject <SBApplicationServerMiscDelegate>
{
    SBApplicationController *_applicationController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applicationServer:(id)arg1 client:(id)arg2 deleteSnapshotsForApplicationIdentifier:(id)arg3;
- (id)_initWithApplicationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
