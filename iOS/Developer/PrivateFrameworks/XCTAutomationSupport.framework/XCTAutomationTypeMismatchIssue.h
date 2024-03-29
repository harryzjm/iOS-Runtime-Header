//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTRuntimeIssue-Protocol.h>

@class NSArray, NSDictionary, NSString, XCAccessibilityElement;

@interface XCTAutomationTypeMismatchIssue : NSObject <XCTRuntimeIssue>
{
    XCAccessibilityElement *_accessibilityElement;
    unsigned long long _legacyElementType;
    unsigned long long _elementTypeFromAutomationType;
    NSDictionary *_accessibilityAttributes;
}

+ (_Bool)supportsSecureCoding;
+ (id)capability;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *accessibilityAttributes; // @synthesize accessibilityAttributes=_accessibilityAttributes;
@property(readonly) unsigned long long elementTypeFromAutomationType; // @synthesize elementTypeFromAutomationType=_elementTypeFromAutomationType;
@property(readonly) unsigned long long legacyElementType; // @synthesize legacyElementType=_legacyElementType;
@property(readonly, copy) XCAccessibilityElement *accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;
- (_Bool)isEqualForAggregationWith:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long aggregationHash;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray *callStackAddresses;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *detailedDescription;
@property(readonly) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForAccessibilityElement:(id)arg1 legacyElementType:(unsigned long long)arg2 elementTypeFromAutomationType:(unsigned long long)arg3 accessibilityAttributes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

