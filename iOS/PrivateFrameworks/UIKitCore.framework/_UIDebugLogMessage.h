//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugLogMessage : NSObject
{
    NSString *_string;
    NSAttributedString *_attributedString;
}

+ (id)messageWithStyle:(unsigned long long)arg1 string:(id)arg2;
+ (id)messageWithPrefix:(id)arg1 color:(id)arg2 string:(id)arg3;
+ (id)messageWithFormat:(id)arg1;
+ (id)messageWithString:(id)arg1;
+ (id)messageWithNewline;
- (void).cxx_destruct;
- (id)attributedDescription;
- (id)description;
- (id)_attributedStringRepresentation;
- (id)_stringRepresentation;
- (_Bool)_isTransparent;
- (_Bool)_isNode;
- (id)initWithString:(id)arg1 attributedString:(id)arg2;

@end

