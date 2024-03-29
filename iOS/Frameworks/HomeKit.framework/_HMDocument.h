//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _HMDocument : NSObject
{
    NSString *_stringValue;
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
@property(readonly, copy) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithString:(id)arg1;

@end

