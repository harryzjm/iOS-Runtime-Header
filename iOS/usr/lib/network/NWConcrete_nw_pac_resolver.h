//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <network/OS_nw_pac_resolver-Protocol.h>

@class NSString;

@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver>
{
    CDUnknownBlockType result_block;
    struct __CFURL *endpointURL;
    struct __CFURL *pacURL;
    struct __CFString *pacScript;
    struct __CFData *auditToken;
    struct __CFString *bundleIdentifier;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
