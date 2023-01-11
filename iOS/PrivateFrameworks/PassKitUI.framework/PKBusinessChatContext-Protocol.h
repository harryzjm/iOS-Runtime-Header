//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PKBusinessChatContext <NSObject>
- (NSString *)businessIdentifier;

@optional
- (_Bool)requiresAuthorization;
- (NSString *)bodyText;
- (NSDictionary *)groupParameters;
- (NSDictionary *)intentParameters;
@end
