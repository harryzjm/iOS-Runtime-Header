//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FMInternalOwnerAccount : NSObject
{
    NSString *_personId;
    NSString *_username;
    NSString *_firstName;
    NSString *_lastName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *personId; // @synthesize personId=_personId;
- (id)description;
- (id)initWithAccount:(id)arg1;

@end

