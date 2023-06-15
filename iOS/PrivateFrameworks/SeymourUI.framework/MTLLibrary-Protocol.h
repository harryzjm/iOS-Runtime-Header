//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/NSObject-Protocol.h>

@class MTLFunctionConstantValues, MTLFunctionDescriptor, MTLIntersectionFunctionDescriptor, NSArray, NSString;
@protocol MTLDevice, MTLFunction;

@protocol MTLLibrary <NSObject>
@property(readonly) NSString *installName;
@property(readonly) long long type;
@property(readonly) NSArray *functionNames;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (id <MTLFunction>)newIntersectionFunctionWithDescriptor:(MTLIntersectionFunctionDescriptor *)arg1 error:(id *)arg2;
- (void)newIntersectionFunctionWithDescriptor:(MTLIntersectionFunctionDescriptor *)arg1 completionHandler:(void (^)(id <MTLFunction>, NSError *))arg2;
- (id <MTLFunction>)newFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 error:(id *)arg2;
- (void)newFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 completionHandler:(void (^)(id <MTLFunction>, NSError *))arg2;
- (void)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 completionHandler:(void (^)(id <MTLFunction>, NSError *))arg3;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 error:(id *)arg3;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1;
@end

