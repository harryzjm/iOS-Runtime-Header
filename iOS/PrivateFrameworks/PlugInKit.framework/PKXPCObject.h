//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface PKXPCObject : NSObject
{
    NSObject<OS_xpc_object> *_object;
}

+ (_Bool)supportsSecureCoding;
+ (id)object:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

