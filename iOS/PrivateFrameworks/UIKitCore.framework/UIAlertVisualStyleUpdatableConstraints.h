//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIAlertVisualStyleUpdatableConstraints : NSObject
{
    NSMutableDictionary *_constraintsByKey;
}

- (void).cxx_destruct;
- (id)constraintForKey:(id)arg1;
- (void)addConstraint:(id)arg1 forKey:(id)arg2;
- (_Bool)hasUpdatableConstraints;
- (id)init;

@end

