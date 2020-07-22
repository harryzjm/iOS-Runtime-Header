//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface XCUIApplicationRegistry : NSObject
{
    NSDictionary *_testDependencies;
    NSDictionary *_userOverrides;
}

@property(copy) NSDictionary *userOverrides; // @synthesize userOverrides=_userOverrides;
@property(copy) NSDictionary *testDependencies; // @synthesize testDependencies=_testDependencies;
- (_Bool)testDependencyExistsForApplicationAtURL:(id)arg1;
- (id)recordForApplicationWithBundleIdentifier:(id)arg1;
- (id)_constructRecordMapFromRawMap:(id)arg1 isTestDependencyMap:(_Bool)arg2;
- (id)initWithTestDependencies:(id)arg1 userOverrides:(id)arg2;
- (void)dealloc;

@end

