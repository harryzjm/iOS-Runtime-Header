//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLCaptureDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLCaptureDescriptorInternal : MTLCaptureDescriptor
{
    _Bool _apiTriggeredCapture;
    _Bool toolTriggeredCapture;
    _Bool ignoreUnusedResources;
    _Bool suspendAfterCapture;
    unsigned long long captureMode;
    unsigned long long triggerHitsToStart;
    unsigned long long triggerHitsToEnd;
    CDUnknownBlockType completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(nonatomic) _Bool suspendAfterCapture; // @synthesize suspendAfterCapture;
@property(nonatomic) _Bool ignoreUnusedResources; // @synthesize ignoreUnusedResources;
@property(nonatomic) _Bool toolTriggeredCapture; // @synthesize toolTriggeredCapture;
@property(nonatomic) _Bool apiTriggeredCapture; // @synthesize apiTriggeredCapture=_apiTriggeredCapture;
@property(nonatomic) unsigned long long triggerHitsToEnd; // @synthesize triggerHitsToEnd;
@property(nonatomic) unsigned long long triggerHitsToStart; // @synthesize triggerHitsToStart;
@property(nonatomic) unsigned long long captureMode; // @synthesize captureMode;
- (id)init;

@end

