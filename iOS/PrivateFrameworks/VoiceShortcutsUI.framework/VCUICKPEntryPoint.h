//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutsUI/CRKIdentifiedProviding-Protocol.h>

@class NSString;

@interface VCUICKPEntryPoint : NSObject <CRKIdentifiedProviding>
{
}

@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (id)cardViewControllerForCard:(id)arg1;
- (unsigned long long)displayPriorityForCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

