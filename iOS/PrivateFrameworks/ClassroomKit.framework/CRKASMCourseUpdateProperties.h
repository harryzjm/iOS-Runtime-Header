//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface CRKASMCourseUpdateProperties : NSObject <NSCopying>
{
    NSString *_name;
    NSNumber *_color;
    NSNumber *_mascot;
    NSSet *_usersToAdd;
    NSSet *_usersToRemove;
    NSSet *_trustedUsersToAdd;
    NSSet *_trustedUsersToRemove;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *trustedUsersToRemove; // @synthesize trustedUsersToRemove=_trustedUsersToRemove;
@property(copy, nonatomic) NSSet *trustedUsersToAdd; // @synthesize trustedUsersToAdd=_trustedUsersToAdd;
@property(copy, nonatomic) NSSet *usersToRemove; // @synthesize usersToRemove=_usersToRemove;
@property(copy, nonatomic) NSSet *usersToAdd; // @synthesize usersToAdd=_usersToAdd;
@property(retain, nonatomic) NSNumber *mascot; // @synthesize mascot=_mascot;
@property(retain, nonatomic) NSNumber *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)areFulfilledByCourse:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
