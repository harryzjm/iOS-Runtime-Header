//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDXPCClient, HDXPCListener;
@protocol _HKXPCExportable;

@protocol HDXPCListenerDelegate <NSObject>
- (id <_HKXPCExportable>)exportObjectForListener:(HDXPCListener *)arg1 client:(HDXPCClient *)arg2 error:(id *)arg3;
@end

