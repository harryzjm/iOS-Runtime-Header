//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HKPPTPluginManager : NSObject
{
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}

+ (id)sharedPluginManager;
- (void).cxx_destruct;
- (void)_loadPPTBundles;
- (void)registerDriverClass:(Class)arg1;
- (Class)classForTestType:(id)arg1;
- (id)builtinTests;
- (id)init;

@end
