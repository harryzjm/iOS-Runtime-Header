//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskRequest.h>

@interface DMFTaskRequest : CATTaskRequest
{
}

+ (_Bool)isPermittedOnPlatform:(unsigned long long)arg1;
+ (_Bool)isPermittedOnCurrentPlatform;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
