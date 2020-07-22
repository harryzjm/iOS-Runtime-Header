//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MXExtensionVendorContextType-Protocol.h>

@class NSString;
@protocol _MXExtensionResponseObserver;

@interface _MXExtensionVendorContext <_MXExtensionVendorContextType>
{
    id <_MXExtensionResponseObserver> _observer;
}

- (void).cxx_destruct;
- (id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;
- (void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

