//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSessionTask, NSURLSessionTaskDependencyDescription;

@interface NSURLSessionTaskDependency : NSObject
{
    NSURLSessionTaskDependencyDescription *_taskDependencyDescription;
    NSURLSessionTask *_parentTask;
    NSURLSessionTask *_mainDocumentTask;
}

+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(_Bool)arg3;
@property(readonly, retain, nonatomic) NSURLSessionTask *mainDocumentTask; // @synthesize mainDocumentTask=_mainDocumentTask;
@property(readonly, retain, nonatomic) NSURLSessionTask *parentTask; // @synthesize parentTask=_parentTask;
@property(retain, nonatomic) NSURLSessionTaskDependencyDescription *taskDependencyDescription; // @synthesize taskDependencyDescription=_taskDependencyDescription;
- (void)dealloc;
- (id)init;

@end
