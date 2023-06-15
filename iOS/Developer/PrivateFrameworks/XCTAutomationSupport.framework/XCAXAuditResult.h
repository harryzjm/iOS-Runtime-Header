//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSString, XCAccessibilityElement;

@interface XCAXAuditResult : NSObject <NSSecureCoding>
{
    NSString *_compactDescription;
    NSString *_detailedDescription;
    XCAccessibilityElement *_element;
    NSString *_auditType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *auditType; // @synthesize auditType=_auditType;
@property(copy, nonatomic) XCAccessibilityElement *element; // @synthesize element=_element;
@property(copy, nonatomic) NSString *detailedDescription; // @synthesize detailedDescription=_detailedDescription;
@property(copy, nonatomic) NSString *compactDescription; // @synthesize compactDescription=_compactDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

