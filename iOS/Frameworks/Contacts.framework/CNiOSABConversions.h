//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABConversions : NSObject
{
}

+ (id)arrayByMappingTransform:(CDUnknownBlockType)arg1 onCFArray:(struct __CFArray *)arg2;
+ (void)updateContact:(id)arg1 fromABPerson:(void *)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id *)arg4;
+ (id)contactFromABPerson:(void *)arg1 uniqueKeysToConvert:(id)arg2 mutable:(_Bool)arg3;
+ (void)initialize;
+ (id)os_log;
+ (id)numberFromIntegerABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)dataFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)dateFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)stringFromABBytes:(char *)arg1 length:(unsigned long long)arg2;

@end
