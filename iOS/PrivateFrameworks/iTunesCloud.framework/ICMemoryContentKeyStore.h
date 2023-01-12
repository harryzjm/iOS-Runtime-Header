//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICContentKeyStoreProtocol-Protocol.h>

@class NSMutableDictionary;

@interface ICMemoryContentKeyStore : NSObject <ICContentKeyStoreProtocol>
{
    NSMutableDictionary *_contentKeys;
    NSMutableDictionary *_renewalDates;
}

- (void).cxx_destruct;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (id)removeKeyForIdentifier:(id)arg1;
- (id)saveKey:(id)arg1 forIdentifier:(id)arg2 withRenewalDate:(id)arg3;
- (id)loadKeyForIdentifier:(id)arg1 renewalDate:(id *)arg2 error:(id *)arg3;
- (_Bool)containsKeyForIdentifier:(id)arg1 error:(id *)arg2;
- (id)init;

@end
