//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, TKTokenConfigurationProxy, TKTokenID;

@interface TKTokenConfiguration : NSObject
{
    TKTokenConfigurationProxy *_proxy;
    NSArray *_keychainItems;
    TKTokenID *_tokenID;
}

+ (id)interfaceForProtocol;
@property(readonly, nonatomic) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;
- (void).cxx_destruct;
- (id)certificateForObjectID:(id)arg1 error:(id *)arg2;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSArray *keychainItems;
@property(copy, nonatomic) NSData *configurationData;
- (id)beginTransaction;
@property(readonly, nonatomic) NSString *instanceID;
- (id)initWithTokenID:(id)arg1 proxy:(id)arg2;

@end
