//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRSharingSessionHelper : NSObject
{
}

+ (long long)CoarseRangeToProx:(int)arg1;
+ (id)ProxToString:(long long)arg1;
+ (int)ProxToCoarseRange:(long long)arg1;
+ (id)reverseNSData:(id)arg1;
+ (id)convertMacStringToNSData:(const void *)arg1;
+ (unsigned long long)NSDataToUInt64:(id)arg1;
+ (basic_string_b963e3c0)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2;
+ (id)HexStringToNSDataMac:(const void *)arg1;
+ (id)UUIDStringToNSDataMac:(const void *)arg1 len:(unsigned long long)arg2;
+ (id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2;
+ (id)NSDataMacToUUID:(id)arg1;

@end

