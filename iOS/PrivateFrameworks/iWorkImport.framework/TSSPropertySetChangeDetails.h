//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSSMutablePropertySet;

__attribute__((visibility("hidden")))
@interface TSSPropertySetChangeDetails : NSObject
{
    TSSMutablePropertySet *mChangedProperties;
}

- (id)changedProperties;
- (void)addChangedProperties:(id)arg1;
- (void)addChangedProperty:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithChangedProperties:(id)arg1;

@end

