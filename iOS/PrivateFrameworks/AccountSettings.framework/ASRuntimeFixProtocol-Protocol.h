//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountSettings/NSObject-Protocol.h>

@class BasicAccount, NSSet, NSString;

@protocol ASRuntimeFixProtocol <NSObject>
- (NSSet *)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(_Bool)arg1;
- (int)fixBasicAccountIfNeeded:(BasicAccount *)arg1 loggingMessage:(NSString *)arg2;
@end

