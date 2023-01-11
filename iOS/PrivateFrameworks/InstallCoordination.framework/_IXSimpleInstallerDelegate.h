//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/IXAppInstallCoordinatorObserver-Protocol.h>

@class IXAppInstallCoordinator, NSString, NSURL;
@protocol IXInitiatingOrUpdatingCoordinator;

@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver>
{
    CDUnknownBlockType _completion;
    NSString *_bundleID;
    IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *_coordinator;
    NSURL *_moveResultToURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *moveResultToURL; // @synthesize moveResultToURL=_moveResultToURL;
@property(retain, nonatomic) IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
