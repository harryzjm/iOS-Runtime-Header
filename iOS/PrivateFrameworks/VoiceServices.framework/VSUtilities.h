//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VSUtilities : NSObject
{
}

+ (_Bool)isInternalBuild;
+ (_Bool)isSeedBuild;
+ (_Bool)isNeuralTTSPlatform;
+ (_Bool)hasAMX;
+ (_Bool)hasANE;
+ (_Bool)isWatch;
+ (_Bool)isHomePod;
+ (id)hardwarePlatform;
+ (id)legacyPlatforms;

@end
