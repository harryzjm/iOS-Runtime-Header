//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ECMIMECharset;

@interface ECHTMLStringAndMIMECharset : NSObject
{
    NSString *_string;
    id <ECMIMECharset> _charset;
}

@property(readonly, nonatomic) id <ECMIMECharset> charset; // @synthesize charset=_charset;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 charset:(id)arg2;

@end
