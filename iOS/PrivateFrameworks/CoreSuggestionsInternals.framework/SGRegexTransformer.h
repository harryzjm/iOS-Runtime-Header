//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString, SGRe2;

@interface SGRegexTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_mapping;
    SGRe2 *_regex;
}

+ (id)withRegex:(id)arg1 andMapping:(id)arg2;
@property(retain) SGRe2 *regex; // @synthesize regex=_regex;
@property(retain) NSString *mapping; // @synthesize mapping=_mapping;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithRegex:(id)arg1 andMapping:(id)arg2;

@end

