//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageLoadingContext, MFMessageLoadingContextEvent, MFMessageSigner, NSArray;

@interface MFMessageLoadingContextSMIMEInfo : NSObject
{
    MFMessageLoadingContextEvent *_loadEvent;
}

+ (id)smimeInfoForLoadEvent:(id)arg1;
@property(readonly, nonatomic) MFMessageLoadingContextEvent *loadEvent; // @synthesize loadEvent=_loadEvent;
- (void).cxx_destruct;
- (void)reevaluateTrustWithNetworkAccessAllowed;
@property(readonly, nonatomic, getter=isMessageEncrypted) _Bool messageEncrypted;
@property(readonly, nonatomic, getter=isMessageSigned) _Bool messageSigned;
@property(readonly, nonatomic) MFMessageSigner *firstSigner;
@property(readonly, nonatomic) NSArray *signers;
@property(readonly, nonatomic) __weak MFMessageLoadingContext *context;
- (id)initWithLoadEvent:(id)arg1;

@end
