//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TPSTargetingValidator : NSObject
{
}

+ (void)_validateCondition:(id)arg1 joinType:(unsigned long long)arg2 context:(id)arg3 cache:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)validateConditions:(id)arg1 joinType:(unsigned long long)arg2 context:(id)arg3 cache:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (_Bool)validateConditions:(id)arg1 joinType:(unsigned long long)arg2 context:(id)arg3 cache:(id)arg4 completionQueue:(id)arg5 error:(id *)arg6;

@end
