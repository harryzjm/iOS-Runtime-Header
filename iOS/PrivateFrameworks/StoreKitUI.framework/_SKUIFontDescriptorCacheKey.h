//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SKUIFontDescriptorCacheKey : NSObject
{
    struct __CFString *_textStyle;
    NSString *_sizeCategory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sizeCategory; // @synthesize sizeCategory=_sizeCategory;
@property(readonly, nonatomic) struct __CFString *textStyle; // @synthesize textStyle=_textStyle;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTextStyle:(struct __CFString *)arg1 sizeCategory:(id)arg2;

@end

