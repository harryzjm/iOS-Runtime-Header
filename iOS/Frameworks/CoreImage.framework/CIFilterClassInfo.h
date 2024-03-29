//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIFilterClassInfo : NSObject
{
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)classInfoForClass:(Class)arg1;
+ (void)clearCache;
+ (id)cache;
- (id)outputKeys;
- (id)inputClasses;
- (id)inputKeys;
- (id)description;
- (id)initWithClass:(Class)arg1;
- (id)init;
- (void)dealloc;

@end

