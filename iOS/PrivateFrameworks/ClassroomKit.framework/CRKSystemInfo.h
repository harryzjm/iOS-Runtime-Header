//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CRKSystemInfo : NSObject
{
    NSString *_buildVersion;
    NSString *_systemVersion;
}

+ (id)sharedSystemInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) _Bool cloudConfigEnablesEphemeralMultiUser;
@property(readonly, nonatomic, getter=isEphemeralMultiUser) _Bool ephemeralMultiUser;
@property(readonly, copy, nonatomic) NSDate *bootDate;
@property(readonly, nonatomic) unsigned long long platform;
- (void)populateVersions;

@end
