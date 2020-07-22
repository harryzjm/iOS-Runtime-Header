//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionDialRequestOpener-Protocol.h>

@class NSString, TUCallCenter;

@interface _CNUIUserActionDialRequestOpener : NSObject <CNUIUserActionDialRequestOpener>
{
    TUCallCenter *_callCenter;
}

+ (id)errorForUnableToOpenDialRequest:(id)arg1 withUnderlyingError:(id)arg2;
+ (id)errorForUnableToCastDialRequest:(id)arg1;
@property(readonly, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
- (void).cxx_destruct;
- (id)openDialRequest:(id)arg1 withScheduler:(id)arg2;
- (id)initWithCallCenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
