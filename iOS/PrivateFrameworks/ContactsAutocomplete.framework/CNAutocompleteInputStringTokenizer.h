//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject
{
    CNFuture *_nameStringTokenizer;
}

+ (id)lazyNameStringTokenizerWithLocale:(id)arg1;
+ (id)tokensFromString:(id)arg1;
@property(retain) CNFuture *nameStringTokenizer; // @synthesize nameStringTokenizer=_nameStringTokenizer;
- (void).cxx_destruct;
- (CDUnknownBlockType)expandCJKNames;
- (id)tokensFromString:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)init;

@end

