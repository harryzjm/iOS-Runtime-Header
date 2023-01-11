//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSNumber, NSString;

@interface SAUserState <SABackgroundContextObject>
{
}

+ (id)userStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userState;
@property(copy, nonatomic) NSString *xpAbCookie;
@property(copy, nonatomic) NSString *userToken;
@property(copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property(copy, nonatomic) NSString *status;
@property(copy, nonatomic) NSString *sharedUserId;
@property(nonatomic) _Bool ageVerificationRequired;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
