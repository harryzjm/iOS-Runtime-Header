//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface MPStorePurchaseErrorResolver
{
    NSNumber *_storeAccountIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_storeAccountIdentifier;
- (void)resolveError:(id)arg1;
- (id)initWithStoreAccountIdentifier:(id)arg1;

@end
