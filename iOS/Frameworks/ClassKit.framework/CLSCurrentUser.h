//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@class CLSPerson;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding>
{
    int _devMode;
    CLSPerson *_person;
    unsigned long long _roles;
}

+ (_Bool)supportsSecureCoding;
+ (id)magicValue;
@property(nonatomic) unsigned long long roles; // @synthesize roles=_roles;
@property(retain, nonatomic) CLSPerson *person; // @synthesize person=_person;
@property(nonatomic) int devMode; // @synthesize devMode=_devMode;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasRole:(unsigned long long)arg1;

@end
