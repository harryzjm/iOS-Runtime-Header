//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AUExtensionInstanceProxy : NSObject
{
    struct AUv3InstanceBase *_auInstance;
}

@property(nonatomic) struct AUv3InstanceBase *auInstance; // @synthesize auInstance=_auInstance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

