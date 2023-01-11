//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SOExtensionFinder : NSObject
{
    NSObject<OS_dispatch_queue> *_extensionFinderQueue;
    id _matchingContext;
}

- (void).cxx_destruct;
- (id)_soExtensionsForExtensions:(id)arg1;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)findExtensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findExtensionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
