//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LNConnectionOptions.h"

__attribute__((visibility("hidden")))
@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions
{
    _Bool _suspended;
    _Bool _sceneless;
    _Bool _allowsForegroundAppLaunchWhileInCarPlay;
    long long _openApplicationPriority;
}

@property(nonatomic) _Bool allowsForegroundAppLaunchWhileInCarPlay; // @synthesize allowsForegroundAppLaunchWhileInCarPlay=_allowsForegroundAppLaunchWhileInCarPlay;
@property(nonatomic) long long openApplicationPriority; // @synthesize openApplicationPriority=_openApplicationPriority;
@property(nonatomic) _Bool sceneless; // @synthesize sceneless=_sceneless;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

