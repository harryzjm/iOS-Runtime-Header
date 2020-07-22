//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CVMLValidationUtilities : NSObject
{
}

+ (id)faceObservationFromOptions:(id)arg1 withOptionName:(id)arg2 error:(id *)arg3;
+ (id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 error:(id *)arg4;
+ (id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 withCountRange:(struct _NSRange)arg4 error:(id *)arg5;
+ (_Bool)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end

