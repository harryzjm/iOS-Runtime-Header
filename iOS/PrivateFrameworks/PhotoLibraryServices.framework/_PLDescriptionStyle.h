//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PLDescriptionStyle : NSObject
{
    _Bool _prettyPrint;
    NSString *_initialFieldSeparator;
    NSString *_fieldSeparator;
    NSString *_nameValueSeparator;
    NSString *_suffix;
    long long _extraIndent;
}

+ (id)styleForEnum:(long long)arg1;
@property(readonly) _Bool prettyPrint; // @synthesize prettyPrint=_prettyPrint;
@property(readonly) long long extraIndent; // @synthesize extraIndent=_extraIndent;
@property(readonly, copy) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, copy) NSString *nameValueSeparator; // @synthesize nameValueSeparator=_nameValueSeparator;
@property(readonly, copy) NSString *fieldSeparator; // @synthesize fieldSeparator=_fieldSeparator;
@property(readonly, copy) NSString *initialFieldSeparator; // @synthesize initialFieldSeparator=_initialFieldSeparator;
- (id)descriptionForObject:(id)arg1 withIndent:(long long)arg2;
- (void)dealloc;
- (id)initWithIntialFieldSeparator:(id)arg1 fieldSeparator:(id)arg2 nameValueSeparator:(id)arg3 suffix:(id)arg4 extraIndent:(long long)arg5 prettyPrint:(_Bool)arg6;

@end

