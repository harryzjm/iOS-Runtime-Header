//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol MTLLibrary, OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface CIKernelLibrary : NSObject
{
    NSObject<OS_dispatch_data> *_data;
    id <MTLLibrary> _library;
}

+ (id)libraryWithData:(id)arg1 error:(id *)arg2;
- (id)newFunctionWithName:(id)arg1 device:(id)arg2;
- (id)functionWithName:(id)arg1;
@property(readonly) unsigned long long functionCount;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

