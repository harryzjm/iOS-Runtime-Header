//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class IMHandle, NSString;

@protocol IMAssistantAccountDataSource <NSObject>
- (IMHandle *)imHandleWithID:(NSString *)arg1;
- (NSString *)countryCode;
- (_Bool)hasMessagingAccount;
@end
