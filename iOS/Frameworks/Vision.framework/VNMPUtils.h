//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPUtils : NSObject
{
}

+ (long long)parseExifTimestamp:(id)arg1;
+ (void)freeVImageBuffer:(struct vImage_Buffer *)arg1;
+ (id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2;
+ (unsigned long long)getHostTimeInNanos;
+ (double)getHostTime;

@end

