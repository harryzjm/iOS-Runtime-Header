//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PredictorUtils : NSObject
{
}

+ (id)getPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;
+ (id)getInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;
+ (void)reportPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;
+ (void)reportInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;
+ (long long)handlePredictException:(struct exception_ptr)arg1;
+ (long long)handleInitException:(struct exception_ptr)arg1;

@end

