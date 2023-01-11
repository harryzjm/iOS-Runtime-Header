//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDShareTokenMetadata : NSObject <NSCopying>
{
    _Bool _forceDSRefetch;
    NSString *_routingKey;
    NSData *_shortSharingTokenData;
    NSData *_publicTokenData;
    NSData *_privateTokenData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *privateTokenData; // @synthesize privateTokenData=_privateTokenData;
@property(retain, nonatomic) NSData *publicTokenData; // @synthesize publicTokenData=_publicTokenData;
@property(nonatomic) _Bool forceDSRefetch; // @synthesize forceDSRefetch=_forceDSRefetch;
@property(retain, nonatomic) NSData *shortSharingTokenData; // @synthesize shortSharingTokenData=_shortSharingTokenData;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(readonly, nonatomic) NSData *shortSharingTokenHashData;
@property(readonly, nonatomic) NSString *shortSharingToken;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
