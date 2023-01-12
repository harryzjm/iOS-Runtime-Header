//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIAAfamilyMember : NSObject
{
    _Bool _isMe;
    NSString *_appleID;
    NSString *_firstName;
    NSString *_lastName;
}

+ (_Bool)supportsSecureCoding;
+ (id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

