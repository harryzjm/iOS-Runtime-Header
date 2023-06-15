//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSoftwareUpdateEventListenerContext, HMSoftwareUpdateDescriptor, NSString;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateEventListener : HMFObject
{
    HMDSoftwareUpdateEventListenerContext *_context;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDSoftwareUpdateEventListenerContext *context; // @synthesize context=_context;
- (id)logIdentifier;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
@property(readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property(readonly) _Bool isSoftwareUpdateAvailable;
@property(readonly) _Bool isSoftwareUpdateDownloadedAndReadyForInstallation;
- (void)registerForEvents;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

