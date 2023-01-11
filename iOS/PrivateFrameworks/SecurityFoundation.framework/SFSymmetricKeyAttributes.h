//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeychainItemAttributes-Protocol.h>
#import <SecurityFoundation/_SFKeyAttributes-Protocol.h>

@class NSString, _SFKeySpecifier;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes>
{
    id _symmetricKeyAttributesInternal;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyDomain;
- (void)setKeySpecifier:(id)arg1;
@property(readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecifier:(id)arg1 domain:(struct NSString *)arg2;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *persistentIdentifier;
@property(readonly) Class superclass;

@end

