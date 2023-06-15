//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelTypeRegistry : NSObject
{
}

+ (id)sharedInstance;
- (id)loadNeuralNetworkClasses:(_Bool)arg1 trainWithMLCompute:(_Bool)arg2;
- (Class)classForCompilingModelType:(int)arg1;
- (id)classesForLoadingModelType:(int)arg1 configuration:(id)arg2 isUpdatable:(_Bool)arg3 isEncrypted:(_Bool)arg4;
- (id)classesForLoadingModelType:(int)arg1;
- (id)init;

@end

