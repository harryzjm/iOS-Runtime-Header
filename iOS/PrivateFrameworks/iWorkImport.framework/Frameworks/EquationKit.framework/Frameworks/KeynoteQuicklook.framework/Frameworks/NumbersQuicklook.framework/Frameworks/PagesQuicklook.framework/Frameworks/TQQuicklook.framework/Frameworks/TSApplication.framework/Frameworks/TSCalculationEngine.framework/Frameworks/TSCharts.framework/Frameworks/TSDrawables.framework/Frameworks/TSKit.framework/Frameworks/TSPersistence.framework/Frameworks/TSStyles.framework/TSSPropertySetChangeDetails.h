//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject
{
    TSSMutablePropertySet *mChangedProperties;
}

- (void).cxx_destruct;
- (id)changedProperties;
- (void)addChangedProperties:(id)arg1;
- (void)addChangedProperty:(int)arg1;
- (id)init;
- (id)initWithChangedProperties:(id)arg1;

@end
