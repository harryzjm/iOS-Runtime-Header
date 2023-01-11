//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MFMailAccountProxy : NSObject
{
    NSDictionary *_properties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id mailAccount;
- (_Bool)_isRestricted;
- (_Bool)_isActive;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool supportsMailDrop;
@property(readonly, nonatomic) _Bool restrictsRepliesAndForwards;
@property(readonly, nonatomic) _Bool supportsThreadOperations;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)_emailAddressesAndAliases;
@property(readonly, nonatomic) NSArray *fromEmailAddressesIncludingDisabled;
@property(readonly, nonatomic) NSArray *fromEmailAddresses;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSString *firstEmailAddress;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *fullUserName;
@property(readonly, nonatomic) _Bool isDefaultDeliveryAccount;
- (id)_initWithProperties:(id)arg1;

@end
