//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface OSLogMessagePlaceholder : NSObject
{
    struct os_log_fmt_cspec_s *_placeholder;
    NSString *_placeholderString;
    NSArray *_placeholderTokens;
}

- (void)dealloc;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *typeNamespace;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *rawString;
- (id)initWithPlaceholderStruct:(struct os_log_fmt_cspec_s *)arg1;
@property(readonly, nonatomic) int precision;
@property(readonly, nonatomic) int width;

@end

