//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SessionCore/ACActivityAutomationInputXPCServer-Protocol.h>

@class NSData, NSString;

@protocol ACActivityInputXPCServer <ACActivityAutomationInputXPCServer>
- (void)endActivityWithIdentifier:(NSString *)arg1 payload:(NSData *)arg2 options:(NSData *)arg3;
- (void)updateActivityWithIdentifier:(NSString *)arg1 payload:(NSData *)arg2;
- (NSData *)requestActivityWithRequest:(NSData *)arg1 error:(out id *)arg2;
@end

