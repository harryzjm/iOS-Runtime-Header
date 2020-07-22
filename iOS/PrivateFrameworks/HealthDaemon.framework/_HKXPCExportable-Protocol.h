//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSXPCInterface;

@protocol _HKXPCExportable <NSObject>
- (void)connectionInvalidated;
- (NSXPCInterface *)remoteInterface;
- (NSXPCInterface *)exportedInterface;

@optional
- (void)connectionInterrupted;
@end

