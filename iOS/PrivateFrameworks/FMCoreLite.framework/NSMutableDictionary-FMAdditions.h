//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (FMAdditions)
- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)fm_safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)fm_safelySetObject:(id)arg1 forKey:(id)arg2;
- (id)fm_objectForKey:(id)arg1 withDefaultValue:(CDUnknownBlockType)arg2;
- (void)fm_safeSetObject:(id)arg1 forKey:(id)arg2;
@end
