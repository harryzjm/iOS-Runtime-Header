//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableDictionary, NSString;

@interface PBTextReader : NSObject
{
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_tagNameCharacterSet;
    NSCharacterSet *_nonHexDigitCharacterSet;
    unsigned long long _pos;
    unsigned long long _length;
    NSString *_string;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_cachedObjectTypes;
}

- (id)readMessageType:(Class)arg1 fromString:(id)arg2;
- (void)dealloc;
- (id)init;

@end
