//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (ARAdditions)
+ (id)ar_UUIDWithCFUUIDRef:(struct __CFUUID *)arg1;
+ (id)ar_UUIDWithIntegerValue:(unsigned long long)arg1;
+ (id)ar_zeroUUID;
+ (id)ar_UUIDWithData:(id)arg1;
+ (id)ar_UUIDWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CFUUID *)ar_createCFUUIDRef;
- (unsigned long long)ar_integerValue;
@end

