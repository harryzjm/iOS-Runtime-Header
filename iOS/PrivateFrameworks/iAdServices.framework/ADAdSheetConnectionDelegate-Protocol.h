//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iAdServices/NSObject-Protocol.h>

@class NSString, NSXPCConnection;

@protocol ADAdSheetConnectionDelegate <NSObject>
- (void)configureConnection:(NSXPCConnection *)arg1;
- (NSString *)adSheetMachServiceName;

@optional
- (void)adSheetConnectionLost;
- (void)adSheetConnectionEstablished;
- (_Bool)shouldConnectToAdSheet;
@end

