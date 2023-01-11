//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandler-Protocol.h>
#import <SilexWeb/SWPresentationManager-Protocol.h>

@class NSString;
@protocol SWLogger, SWScriptsManager;

@interface SWPresentationManager : NSObject <SWMessageHandler, SWPresentationManager>
{
    unsigned long long _presentationState;
    double _height;
    CDUnknownBlockType loadBlock;
    CDUnknownBlockType presentableBlock;
    id <SWScriptsManager> _scriptsManager;
    id <SWLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SWScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
@property(copy, nonatomic, setter=onPresentable:) CDUnknownBlockType presentableBlock; // @synthesize presentableBlock;
@property(copy, nonatomic, setter=onLoad:) CDUnknownBlockType loadBlock; // @synthesize loadBlock;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
- (id)descriptionForPresentationState:(unsigned long long)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)refresh;
- (id)initWithWebContentScriptsManager:(id)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
