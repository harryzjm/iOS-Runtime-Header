//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SecurityFoundation/_SFECPublicKey.h>

@class NSString;

@interface _SFECPublicKey (TPPublicKey)
- (_Bool)checkSignature:(id)arg1 matchesData:(id)arg2;
- (id)spki;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

