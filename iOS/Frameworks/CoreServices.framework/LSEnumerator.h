//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSPredicate;

@interface LSEnumerator : NSEnumerator
{
    CDUnknownBlockType _filter;
    struct atomic_flag _hasFiredErrorHandler;
    CDUnknownBlockType _errorHandler;
}

+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2;
+ (id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1;
+ (id)new;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (id)nextObject;
@property(copy, nonatomic) CDUnknownBlockType filter;
@property(copy, nonatomic) NSPredicate *predicate;
- (id)init;
- (void)_fireErrorHandlerWithError:(id)arg1;
- (id)_initWithContext:(struct LSContext *)arg1;

@end
