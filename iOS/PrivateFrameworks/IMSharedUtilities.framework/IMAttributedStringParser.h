//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject
{
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;
- (void)parseContext:(id)arg1;
- (void)_preprocessWithContext:(id)arg1 string:(id *)arg2;

@end

