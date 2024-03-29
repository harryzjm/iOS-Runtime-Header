//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABConstantsMapping : NSObject
{
    NSDictionary *_mapping;
    id _defaultConstant;
}

+ (id)CNToABPersonShortNameFormatConstantsMapping;
+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) id defaultConstant; // @synthesize defaultConstant=_defaultConstant;
@property(retain, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (id)mappedConstant:(id)arg1;
- (id)invertedMapping;
- (id)initWithMapping:(id)arg1;

@end

