//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCoding-Protocol.h>
#import <MusicLibrary/NSCopying-Protocol.h>

@interface ML3Predicate : NSObject <NSCoding, NSCopying>
{
}

- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)spotlightPredicate;
- (_Bool)isFalseAlways;
- (_Bool)isTrueAlways;
- (_Bool)isDynamicForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

