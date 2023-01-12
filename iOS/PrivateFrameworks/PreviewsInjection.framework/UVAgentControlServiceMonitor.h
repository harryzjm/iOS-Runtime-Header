//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreviewsInjection/BSServiceConnectionEndpointMonitorDelegate-Protocol.h>

@class BSServiceConnectionEndpointMonitor, NSString, _TtC17PreviewsInjection14UVControlAgent;

@interface UVAgentControlServiceMonitor : NSObject <BSServiceConnectionEndpointMonitorDelegate>
{
    BSServiceConnectionEndpointMonitor *_endpointMonitor;
    _TtC17PreviewsInjection14UVControlAgent *_agent;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
- (void)monitor:(id)arg1 willLoseEndpoint:(id)arg2;
- (void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
