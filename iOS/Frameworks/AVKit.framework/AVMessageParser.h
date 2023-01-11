//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface AVMessageParser : NSObject
{
    NSString *_lineSeparator;
    NSString *_headerBodySeparator;
    NSString *_bodyLengthKey;
    NSString *_compressionMethodKey;
    NSData *_lineSeparatorData;
    NSData *_headerBodySeparatorData;
}

+ (id)airMessageParser;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *headerBodySeparatorData; // @synthesize headerBodySeparatorData=_headerBodySeparatorData;
@property(retain, nonatomic) NSData *lineSeparatorData; // @synthesize lineSeparatorData=_lineSeparatorData;
@property(copy, nonatomic) NSString *compressionMethodKey; // @synthesize compressionMethodKey=_compressionMethodKey;
@property(copy, nonatomic) NSString *bodyLengthKey; // @synthesize bodyLengthKey=_bodyLengthKey;
@property(copy, nonatomic) NSString *headerBodySeparator; // @synthesize headerBodySeparator=_headerBodySeparator;
@property(copy, nonatomic) NSString *lineSeparator; // @synthesize lineSeparator=_lineSeparator;
- (id)partsWithData:(id)arg1;
- (id)init;
- (id)initWithLineSeparator:(id)arg1 headerBodySeparator:(id)arg2 bodyLengthKey:(id)arg3 compressionMethodKey:(id)arg4;

@end
