//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXMiniHTMLParser : NSObject
{
    CDUnknownBlockType _parsedCharactersBlock;
    CDUnknownBlockType _parsedMarkupElementStartBlock;
    CDUnknownBlockType _parsedMarkupElementEndBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSString *__string;
}

+ (id)stringByConvertingToHTML:(id)arg1;
+ (id)charactersForEntityNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *_string; // @synthesize _string=__string;
@property(copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedMarkupElementEndBlock; // @synthesize parsedMarkupElementEndBlock=_parsedMarkupElementEndBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedMarkupElementStartBlock; // @synthesize parsedMarkupElementStartBlock=_parsedMarkupElementStartBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
- (void)parse;
- (id)initWithString:(id)arg1;
- (id)init;

@end
