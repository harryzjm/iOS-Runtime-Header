//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDUser, NSString;

@interface HMDHomeDataPushDestination : NSObject
{
    _Bool _ignoreConfigCompare;
    NSString *_username;
    HMDUser *_user;
    NSString *_destination;
}

@property(nonatomic) _Bool ignoreConfigCompare; // @synthesize ignoreConfigCompare=_ignoreConfigCompare;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *pushDestination;
- (id)description;
- (id)initWithUser:(id)arg1 destination:(id)arg2;

@end

