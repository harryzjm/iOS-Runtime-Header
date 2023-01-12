//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>

@class HMRemovedUserInfo, HMUser, NSArray, NSString;

@interface HMAccessCodeUserInformation : NSObject <HMFObject>
{
    NSString *_simpleLabel;
    HMUser *_user;
    HMRemovedUserInfo *_removedUserInfo;
}

+ (id)shortDescription;
+ (id)userInformationWithValue:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) HMRemovedUserInfo *removedUserInfo; // @synthesize removedUserInfo=_removedUserInfo;
@property(readonly) HMUser *user; // @synthesize user=_user;
@property(readonly, copy) NSString *simpleLabel; // @synthesize simpleLabel=_simpleLabel;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)createAccessCodeUserInformationValue;
- (id)initWithSimpleLabel:(id)arg1 user:(id)arg2 removedUserInfo:(id)arg3;
- (id)initWithRemovedUserInfo:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithSimpleLabel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
