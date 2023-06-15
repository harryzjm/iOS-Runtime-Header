//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNStringUtils : NSObject
{
}

+ (id)removeWhitespaceFromString:(id)arg1;
+ (id)whitespaceDelimitedWordsFromString:(id)arg1;
+ (_Bool)validatePathComponentsOfString:(id)arg1 hasCount:(long long)arg2 error:(id *)arg3;
+ (_Bool)validateComponentsOfString:(id)arg1 separatedByString:(id)arg2 hasCount:(long long)arg3 error:(id *)arg4;
+ (id)pathComponentsOfString:(id)arg1 componentsCount:(long long)arg2 error:(id *)arg3;
+ (id)componentsOfString:(id)arg1 separatedByString:(id)arg2 componentsCount:(long long)arg3 error:(id *)arg4;
+ (id)nonemptyComponentsOfString:(id)arg1 separatedByCharactersInSet:(id)arg2;
+ (id)nonemptyComponentsOfString:(id)arg1 separatedByString:(id)arg2;
+ (id)nonemptyStringsArrayFromCollection:(id)arg1;
+ (Class)parseClassFromString:(id)arg1 error:(id *)arg2;
+ (id)parsePositiveUInt32FromString:(id)arg1 error:(id *)arg2;
+ (id)parseUInt32FromString:(id)arg1 error:(id *)arg2;
+ (id)numberFromString:(id)arg1 error:(id *)arg2;
+ (id)numberFromString:(id)arg1;
+ (id)unsignedLongLongFromString:(id)arg1;
+ (id)longLongFromString:(id)arg1;
+ (id)doubleFromString:(id)arg1;
- (id)init;

@end

