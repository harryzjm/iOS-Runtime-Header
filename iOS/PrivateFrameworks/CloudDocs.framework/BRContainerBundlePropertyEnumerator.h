//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRContainerBundlePropertyEnumerator : NSEnumerator
{
    NSDictionary *_plist;
    NSEnumerator *_enumerator;
    NSString *_propertyKey;
    Class _valueClass;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithContainerPlist:(id)arg1 propertyKey:(id)arg2 valuesOfClass:(Class)arg3;

@end

