//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol NPKTransientPassAssertionServerClientProtocol <NSObject>
- (void)didEnterFieldForPassesWithUniqueIDs:(NSArray *)arg1;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(NSString *)arg1;
- (void)handleDelegatedDoublePressEvent;
@end

