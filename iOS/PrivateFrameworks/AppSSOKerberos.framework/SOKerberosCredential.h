//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOKerberosCredential : NSObject
{
    unsigned int _lifetime;
    NSString *_name;
    NSString *_uuid;
}

- (void).cxx_destruct;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property unsigned int lifetime; // @synthesize lifetime=_lifetime;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)init;

@end
