//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface IBICIssue : NSObject
{
    NSString *_message;
    NSString *_catalogPath;
    NSSet *_catalogItemIdentifiers;
    long long _severity;
    long long _classification;
}

+ (id)conflictIssueForItem:(id)arg1 onName:(id)arg2;
+ (id)descriptionForSeverity:(long long)arg1;
+ (id)descriptionForClassification:(long long)arg1;
+ (id)noticeWithCatalogItem:(id)arg1 classification:(long long)arg2 message:(id)arg3;
+ (id)errorWithCatalogItem:(id)arg1 classification:(long long)arg2 message:(id)arg3;
+ (id)warningWithCatalogItem:(id)arg1 classification:(long long)arg2 message:(id)arg3;
+ (id)relativeIdentifierPathsForItems:(id)arg1;
- (void).cxx_destruct;
@property(readonly) long long classification; // @synthesize classification=_classification;
@property(readonly) long long severity; // @synthesize severity=_severity;
@property(readonly) NSSet *catalogItemIdentifiers; // @synthesize catalogItemIdentifiers=_catalogItemIdentifiers;
@property(readonly) NSString *catalogPath; // @synthesize catalogPath=_catalogPath;
@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) NSString *classificationDescription;
@property(readonly) NSString *severityDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *orderedCatalogItemIdentifiers;
- (id)copyWithReplacedIdentifiers:(id)arg1 catalogPath:(id)arg2;
- (id)copyWithReplacedCatalogItems:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithAffectedCatalogItem:(id)arg1 classification:(long long)arg2 severity:(long long)arg3 message:(id)arg4;
- (id)initWithAffectedCatalogItems:(id)arg1 classification:(long long)arg2 severity:(long long)arg3 message:(id)arg4;
- (id)initWithAffectedCatalogItemIdentifiers:(id)arg1 catalogPath:(id)arg2 classification:(long long)arg3 severity:(long long)arg4 message:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

