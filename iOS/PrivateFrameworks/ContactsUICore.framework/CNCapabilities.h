//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNCapabilities-Protocol.h>

@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>
{
}

@property(readonly, nonatomic) _Bool isPaySupported;
@property(readonly, nonatomic) _Bool isFaceTimeAudioSupported;
@property(readonly, nonatomic) _Bool isFaceTimeVideoSupported;
@property(readonly, nonatomic) _Bool isiMessageSupported;
@property(readonly, nonatomic) _Bool areTelephonyCallsSupported;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
