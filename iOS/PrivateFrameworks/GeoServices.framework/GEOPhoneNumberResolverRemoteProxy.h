//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPhoneNumberResolving-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOPhoneNumberResolverRemoteProxy : NSObject <GEOPhoneNumberResolving>
{
    NSObject<OS_dispatch_queue> *_xcpWorkQueue;
}

- (void).cxx_destruct;
- (void)resolvePhoneNumbers:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

