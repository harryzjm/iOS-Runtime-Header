//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LACustomPasswordRequirement : NSObject
{
    NSString *_password;
}

+ (void)requestCreationWithLocalizedReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)arg1;
- (id)initWithCustomPassword:(id)arg1;

@end

