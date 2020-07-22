//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
    NSString *_templateString;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *templateString; // @synthesize templateString=_templateString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2;
- (id)templateBySubstitutingValues:(id)arg1;
- (id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2;
- (id)URLWithSearchTerms:(id)arg1;
- (_Bool)includesParameter:(id)arg1;
- (id)initWithString:(id)arg1;

@end

