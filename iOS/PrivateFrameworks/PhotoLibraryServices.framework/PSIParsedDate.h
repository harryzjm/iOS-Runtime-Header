//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PSIParsedDate : NSObject
{
    NSDictionary *_attributes;
    struct _NSRange _range;
    struct _NSRange _extensionRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange extensionRange; // @synthesize extensionRange=_extensionRange;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (id)initWithAttributes:(id)arg1 range:(struct _NSRange)arg2 extensionRange:(struct _NSRange)arg3;

@end
