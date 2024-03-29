//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CSStore : NSObject
{
    struct Store _store;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1 error:(id *)arg2;
@property(nonatomic, getter=isReadOnly, setter=setReadOnly:) _Bool readOnly;
- (void)setExpectedAccessQueue:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;
- (id)initByMovingStore:(void *)arg1;
- (id)init;

@end

