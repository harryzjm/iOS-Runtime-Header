//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Catalyst/NSSecureCoding-Protocol.h>

@interface CATTaskRequest : NSObject <NSSecureCoding>
{
    _Bool _handlesNotifications;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) _Bool handlesNotifications; // @synthesize handlesNotifications=_handlesNotifications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

