//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface NSUserDefaults (DVTNSUserDefaultsAdditions)
- (long long)dvt_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (double)dvt_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (_Bool)dvt_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (void)dvt_setupDefaultsFromEnvironment;
- (void)dvt_setFilePath:(id)arg1 forKey:(id)arg2;
- (id)dvt_filePathForKey:(id)arg1;
- (_Bool)dvt_objectIsChangedForKey:(id)arg1;
- (id)dvt_objectForKey:(id)arg1 inVolatileDomainForName:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

