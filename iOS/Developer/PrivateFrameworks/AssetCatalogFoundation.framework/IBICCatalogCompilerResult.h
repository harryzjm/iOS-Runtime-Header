//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IBICCatalogCompilerResult : NSObject
{
    NSMutableSet *_outputFiles;
    NSMutableArray *_hardErrors;
    NSMutableArray *_softErrors;
    NSMutableArray *_issues;
    _Bool _success;
    NSMutableDictionary *_partialInfoPlist;
}

+ (id)resultWithSingleError:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *partialInfoPlist; // @synthesize partialInfoPlist=_partialInfoPlist;
@property(copy, nonatomic) NSArray *issues; // @synthesize issues=_issues;
@property(copy, nonatomic) NSArray *softErrors; // @synthesize softErrors=_softErrors;
@property(copy, nonatomic) NSArray *hardErrors; // @synthesize hardErrors=_hardErrors;
@property(copy, nonatomic) NSSet *outputFiles; // @synthesize outputFiles=_outputFiles;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeResults:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)sortedOutputFiles;
- (void)addOutputFiles:(id)arg1;
- (void)addOutputFile:(id)arg1;
- (void)addIssues:(id)arg1;
- (void)addIssue:(id)arg1;
- (void)addSoftErrors:(id)arg1;
- (void)addSoftError:(id)arg1 wrappedWithDescription:(id)arg2;
- (void)addSoftError:(id)arg1;
- (void)addHardErrors:(id)arg1;
- (void)addHardError:(id)arg1 wrappedWithDescription:(id)arg2;
- (void)addHardError:(id)arg1;
- (void)failWithHardError:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

