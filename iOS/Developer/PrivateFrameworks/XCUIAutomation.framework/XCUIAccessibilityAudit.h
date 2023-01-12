//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, XCUIApplication;

@interface XCUIAccessibilityAudit : NSObject
{
    XCUIApplication *_application;
    NSArray *__auditTypes;
    NSArray *__ignoredIdentifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *_ignoredIdentifiers; // @synthesize _ignoredIdentifiers=__ignoredIdentifiers;
@property(retain, nonatomic) NSArray *_auditTypes; // @synthesize _auditTypes=__auditTypes;
@property(readonly, nonatomic) XCUIApplication *application; // @synthesize application=_application;
- (id)_runAudit:(id *)arg1;
- (id)runAuditWithError:(id *)arg1;
- (id)initWithApplication:(id)arg1 auditType:(id)arg2 elementIdentifiersToIgnore:(id)arg3;

@end

