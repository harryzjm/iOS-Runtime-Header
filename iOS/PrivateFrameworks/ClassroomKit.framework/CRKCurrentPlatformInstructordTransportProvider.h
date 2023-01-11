//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@class NSString, NSURL;
@protocol CRKTransportProviding;

@interface CRKCurrentPlatformInstructordTransportProvider : NSObject <CRKTransportProviding>
{
    id <CRKTransportProviding> mBaseProvider;
    NSURL *_classroomAppBundleURL;
}

@property(retain, nonatomic) NSURL *classroomAppBundleURL; // @synthesize classroomAppBundleURL=_classroomAppBundleURL;
- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
