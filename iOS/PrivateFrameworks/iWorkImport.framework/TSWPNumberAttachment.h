//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPNumberAttachment
{
    NSString *_stringValue;
    NSString *_numberFormat;
}

+ (_Bool)allowsObjectDigestValidation;
+ (Class)classForUnarchiver:(id)arg1;
@property(copy, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (void)performTemplateLocalization:(id)arg1;
- (id)stringWithNumber:(unsigned long long)arg1;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringEquivalent;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

