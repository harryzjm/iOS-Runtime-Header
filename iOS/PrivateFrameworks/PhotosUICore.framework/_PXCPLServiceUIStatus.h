//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCPLServiceUIStatus-Protocol.h>

@class NSString;

@interface _PXCPLServiceUIStatus : NSObject <PXCPLServiceUIStatus>
{
    _Bool _paused;
    NSString *_referencedItemsDescription;
    NSString *_stateDescription;
    NSString *_failureDescription;
    double _progress;
    CDUnknownBlockType _action;
    NSString *_actionTitle;
    NSString *_actionConfirmationAlertTitle;
    NSString *_actionConfirmationAlertSubtitle;
    NSString *_actionConfirmationAlertButtonTitle;
    long long _serviceAction;
}

@property(nonatomic) long long serviceAction; // @synthesize serviceAction=_serviceAction;
@property(retain, nonatomic) NSString *actionConfirmationAlertButtonTitle; // @synthesize actionConfirmationAlertButtonTitle=_actionConfirmationAlertButtonTitle;
@property(retain, nonatomic) NSString *actionConfirmationAlertSubtitle; // @synthesize actionConfirmationAlertSubtitle=_actionConfirmationAlertSubtitle;
@property(retain, nonatomic) NSString *actionConfirmationAlertTitle; // @synthesize actionConfirmationAlertTitle=_actionConfirmationAlertTitle;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSString *failureDescription; // @synthesize failureDescription=_failureDescription;
@property(retain, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property(retain, nonatomic) NSString *referencedItemsDescription; // @synthesize referencedItemsDescription=_referencedItemsDescription;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)_isEqualToCPLServiceUIStatus:(id)arg1 onlyProgressIsNotEqual:(_Bool *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
