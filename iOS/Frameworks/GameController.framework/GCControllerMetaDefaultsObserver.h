//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface GCControllerMetaDefaultsObserver : NSObject
{
    NSUserDefaults *_metaDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *metaDefaults; // @synthesize metaDefaults=_metaDefaults;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end

