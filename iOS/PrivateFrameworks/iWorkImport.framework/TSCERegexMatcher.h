//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

__attribute__((visibility("hidden")))
@interface TSCERegexMatcher : NSObject
{
    NSRegularExpression *_regex;
}

+ (id)regexMatcherWithStringMatch:(id)arg1;
- (void).cxx_destruct;
- (_Bool)matches:(id)arg1;
- (id)initWithStringToMatch:(id)arg1;

@end

