//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _HKXMLExtractorElement : NSObject
{
    NSString *_specificationElement;
    NSDictionary *_specificationAttributes;
}

@property(readonly) NSDictionary *specificationAttributes; // @synthesize specificationAttributes=_specificationAttributes;
@property(readonly) NSString *specificationElement; // @synthesize specificationElement=_specificationElement;
- (void).cxx_destruct;
- (_Bool)matchesElement:(id)arg1;
- (id)initWithElementName:(id)arg1 attributes:(id)arg2;
- (id)initWithTagSpecification:(id)arg1;

@end

