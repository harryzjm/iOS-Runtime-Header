//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DDScannerService : NSObject
{
}

+ (void)cancelJob:(long long)arg1;
+ (long long)scanString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (long long)scanQuery:(struct __DDScanQuery *)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (long long)scanString:(id)arg1 range:(struct _NSRange)arg2 configuration:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)scanString:(id)arg1;
+ (id)scanQuery:(struct __DDScanQuery *)arg1 configuration:(id)arg2;
+ (id)scanString:(id)arg1 range:(struct _NSRange)arg2 configuration:(id)arg3;
+ (void)appendWatchOSLinksToString:(id)arg1;

@end
