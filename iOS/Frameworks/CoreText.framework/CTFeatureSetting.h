//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface CTFeatureSetting : NSDictionary
{
    NSDictionary *_dictionary;
}

- (_Bool)isEqualToFeatureSetting:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)value;
- (id)tag;
- (id)selector;
- (id)type;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNormalizedDictionary:(id)arg1;

@end
