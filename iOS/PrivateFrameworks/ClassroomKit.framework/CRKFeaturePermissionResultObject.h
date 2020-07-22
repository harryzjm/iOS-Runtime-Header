//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@interface CRKFeaturePermissionResultObject : NSObject <NSSecureCoding>
{
    _Bool _modifiable;
    unsigned long long _permission;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isModifiable) _Bool modifiable; // @synthesize modifiable=_modifiable;
@property(nonatomic) unsigned long long permission; // @synthesize permission=_permission;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
