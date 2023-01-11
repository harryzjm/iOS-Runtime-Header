//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/NSCopying-Protocol.h>
#import <MIME/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ECMessageHeaders <NSCopying, NSObject>
- (NSArray *)listUnsubscribeCommands;
- (NSString *)firstSenderAddress;
- (NSString *)firstAddressForKey:(NSString *)arg1;
- (id)firstHeaderForKey:(NSString *)arg1;
- (NSArray *)headersForKey:(NSString *)arg1;
- (NSArray *)allHeaderKeys;
@end
