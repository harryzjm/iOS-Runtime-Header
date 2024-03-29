//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CarbonComponentScannerXPCClient : NSObject
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)rescan:(id)arg1 added:(void *)arg2 removed:(void *)arg3;
- (struct AudioComponentVector)initialScan:(id)arg1;
- (void)handleConnectionError:(_Bool)arg1;
- (id)xpcConnection;
- (id)init;

@end

