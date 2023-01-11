//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRKKeychain;

@interface CRKKeychainProvider : NSObject
{
    id <CRKKeychain> _keychain;
}

+ (id)makeKeychainForCurrentEnvironment;
+ (id)sharedProvider;
@property(readonly, nonatomic) id <CRKKeychain> keychain; // @synthesize keychain=_keychain;
- (void).cxx_destruct;
- (id)initWithKeychain:(id)arg1;

@end
