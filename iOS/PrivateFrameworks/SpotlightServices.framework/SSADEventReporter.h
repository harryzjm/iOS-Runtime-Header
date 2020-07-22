//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSADEventReporter : NSObject
{
}

+ (void)reportBadDirectivesForModelType:(unsigned long long)arg1;
+ (void)reportModelDeletionForType:(unsigned long long)arg1;
+ (void)reportBadL3Models;
+ (void)reportBadL2Models;
+ (void)reportModelLoadingError;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)arg1;
+ (void)reportKey:(id)arg1;

@end
