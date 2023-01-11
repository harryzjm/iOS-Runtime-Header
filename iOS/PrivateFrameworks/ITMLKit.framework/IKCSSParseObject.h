//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKArray;

@interface IKCSSParseObject : NSObject
{
    IKArray *_cssValue;
    long long _type;
    struct _NSRange _range;
}

+ (id)stringifyList:(id)arg1;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) IKArray *cssValue; // @synthesize cssValue=_cssValue;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

