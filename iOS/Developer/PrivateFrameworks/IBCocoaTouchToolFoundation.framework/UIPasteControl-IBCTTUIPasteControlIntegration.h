//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPasteControl.h>

@class NSString, UIPasteConfiguration;

@interface UIPasteControl (IBCTTUIPasteControlIntegration)
- (_Bool)canPasteItemProviders:(id)arg1;
@property(copy, nonatomic) UIPasteConfiguration *pasteConfiguration;
- (void)setupForRendering;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

