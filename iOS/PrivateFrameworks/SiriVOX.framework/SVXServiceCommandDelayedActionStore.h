//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandDelayedActionStore : NSObject
{
    NSMutableDictionary *_actionsByKey;
}

- (void).cxx_destruct;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (void)setAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (id)init;

@end
