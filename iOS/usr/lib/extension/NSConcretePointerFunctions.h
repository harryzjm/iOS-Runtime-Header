//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPointerFunctions.h"

__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions
{
    struct NSSlice slice;
}

+ (_Bool)initializeSlice:(struct NSSlice *)arg1 withOptions:(unsigned long long)arg2;
+ (void)initializeBackingStore:(struct NSSlice *)arg1 sentinel:(_Bool)arg2 dynamic:(_Bool)arg3;
- (_Bool)usesWeakReadAndWriteBarriers;
- (_Bool)usesStrongWriteBarrier;
- (CDUnknownFunctionPointerType)relinquishFunction;
- (CDUnknownFunctionPointerType)acquireFunction;
- (CDUnknownFunctionPointerType)descriptionFunction;
- (CDUnknownFunctionPointerType)isEqualFunction;
- (CDUnknownFunctionPointerType)hashFunction;
- (CDUnknownFunctionPointerType)sizeFunction;
- (void)setUsesWeakReadAndWriteBarriers:(_Bool)arg1;
- (void)setUsesStrongWriteBarrier:(_Bool)arg1;
- (void)setRelinquishFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setAcquireFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setDescriptionFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setIsEqualFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setHashFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setSizeFunction:(CDUnknownFunctionPointerType)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

