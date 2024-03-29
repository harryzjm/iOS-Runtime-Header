//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/NSCopying-Protocol.h>
#import <XCTestCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface XCTAggregateSuiteRunStatistics : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_lastTestIdentifier;
    NSMutableDictionary *_recordMap;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *recordMap; // @synthesize recordMap=_recordMap;
@property(copy) NSString *lastTestIdentifier; // @synthesize lastTestIdentifier=_lastTestIdentifier;
- (id)recordForSuiteNamed:(id)arg1;
- (void)addSuiteRecord:(id)arg1;
@property(readonly) NSArray *suiteRecords;
@property(readonly) unsigned long long suiteRecordCount;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToStatistics:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

